<x-series.layout title="Temporadas">
    <x-series.title title="Temporadas"/>
    <div class="d-flex justify-content-end align-items-center">
        <button type="button" class="btn btn-primary btn-floating ">
            <a href="{{route('series.index')}}" class="text-light text-decoration-none">Home</a>
        </button>
    </div>

    <ul class="list-group text-light my-4">
        @foreach($seasons AS $season)
            <li class="list-group-item d-flex justify-content-between align-items-center">
                Temporada {{$season->number}}
              <span class="badge bg-secondary">
                {{$season->episodes->count()}}
              </span>
            </li>
        @endforeach
    </ul>
</x-series.layout>
