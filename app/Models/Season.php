<?php

namespace App\Models;

use App\Models\Series;
use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Season extends Model
{
    use HasFactory;

    protected $fillable = [
        'number'
    ];

    public function series(): \Illuminate\Database\Eloquent\Relations\BelongsTo
    {
        return $this->belongsTo(Series::class);
    }

    public function episodes(): \Illuminate\Database\Eloquent\Relations\HasMany
    {
        return $this->hasMany(Episode::class);
    }
}
