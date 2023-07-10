<?php

namespace App\Http\Controllers;

use App\Models\Series;
use Illuminate\Http\Request;
use Illuminate\View\View;

class SeasonsController extends Controller
{
    public function index(Series $series): View
    {
        $seasons = $series->seasons()->get();

        return view('seasons.index')->with('seasons', $seasons);
    }
}
