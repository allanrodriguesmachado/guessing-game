<?php

namespace App\Models;

use Illuminate\Database\Eloquent\Factories\HasFactory;
use Illuminate\Database\Eloquent\Model;

class Episode extends Model
{
    use HasFactory;
    protected $fillable = [
        'number'
    ];
    public $timestamps = false;

    public function season(): \Illuminate\Database\Eloquent\Relations\BelongsTo
    {
        return $this->belongsTo(Season::class);
    }
}
