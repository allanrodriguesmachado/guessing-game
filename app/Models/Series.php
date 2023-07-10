<?php

namespace App\Models;

use App\Models\Season;
use Illuminate\Database\Eloquent\Builder;
use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Series extends Model
{
    use HasFactory;

    protected $fillable = ['name'];

    protected static function booted(): void
    {
        self::addGlobalScope('ordered', function (Builder $queryBuilder) {
            $queryBuilder->orderBy('name');
        });
    }

    public function seasons()
    {
        return $this->hasMany(Season::class, 'series_id');
    }
}
