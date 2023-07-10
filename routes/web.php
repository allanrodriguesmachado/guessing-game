<?php

use App\Http\Controllers\SeasonsController;
use App\Http\Controllers\SeriesController;
use Illuminate\Support\Facades\Route;


//Route::get('series', [SeriesController::class, 'listSeries'])->name('series.index');
//Route::get('series/create', [SeriesController::class, 'createSeries'])->name('series.create');
//Route::post('series/destroy/{serie}', [SeriesController::class, 'destroy'])->name('series.destroy');

Route::get('/', [SeriesController::class, 'index'])->name('series.index');

Route::resource('series', SeriesController::class)->only([
    'index', 'create', 'store', 'destroy', 'edit', 'update'
]);

Route::resource('series/{series}/seasons', SeasonsController::class)->only([
    'index'
]);
