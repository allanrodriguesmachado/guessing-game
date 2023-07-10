<?php

namespace App\Http\Controllers;

use App\Http\Requests\SeriesFormRequest;
use App\Models\Episode;
use App\Models\Season;
use App\Models\Series;
use Illuminate\Http\RedirectResponse;
use Illuminate\Http\Request;
use Illuminate\Routing\Redirector;
use Illuminate\View\View;

class SeriesController extends Controller
{
    public function index(): View
    {
        $series = Series::all();

        $mensagemSucesso = session('mensagemSucesso');

        return view('series.index')->with('series', $series)->with('mensagemSucesso', $mensagemSucesso);
    }

    public function create(): View
    {
        return view('series.create');
    }

    public function store(SeriesFormRequest $request)
    {
        $serie = Series::query()->create($request->all());
        $seasons = [];

        for ($qty = 1; $qty <= $request->seasonsQty; $qty++) {
            $seasons[] = [
                'series_id' => $serie->id,
                'number' => $qty
            ];
        }

        Season::insert($seasons);

        $episodes = [];
        foreach ($serie->seasons as $season) {
            for ($perQty = 1; $perQty <= $request->episodesPerSeason; $perQty++) {
                $episodes[] = [
                    'season_id' => $season->id,
                    'number' => $perQty
                ];
            }
        }

        Episode::insert($episodes);

        return redirect(route('series.index'))->with('success', "Serie {$request->name} Added successfully");
    }

    public function destroy(Series $series): RedirectResponse
    {
        Series::destroy($series->id);

        return redirect(route('series.index'))->with('warning', "Serie {$series->name} removed successfully");
    }

    public function edit(Series $series): View
    {
        return view('series.edit')->with('serie', $series);
    }

    public function update(SeriesFormRequest $request, Series $series): RedirectResponse
    {
        $name = $request->all();
        $series->update($name);

        return redirect(route('series.index'))->with('success', "Serie {$request->name} Changed successfully");
    }
}
