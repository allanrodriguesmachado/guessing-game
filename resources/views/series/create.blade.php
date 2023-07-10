<x-series.layout title="Create Series">
    <form class="form-inline" method="post" action="{{route('series.store')}}">
        @csrf

        <div class="row mb-3">
            <div class="col-8">
                <label for="name" class="sr-only">Nome da serie:</label>
                <input
                    autofocus
                    type="text"
                    name="name"
                    id="name"
                    class="form-control"
                    value="{{old('name')}}"/>
            </div>

            <div class="col-2">
                <label for="seasonsQty" class="sr-only">N de temporadas:</label>
                <input

                    type="text"
                    name="seasonsQty"
                    id="seasonsQty"
                    class="form-control"
                    value="{{old('seasonsQty')}}"/>
            </div>

            <div class="col-2">
                <label for="episodesPerSeason" class="sr-only">Eps / Temporadas:</label>
                <input
                    type="text"
                    name="episodesPerSeason"
                    id="episodesPerSeason"
                    class="form-control"
                    value="{{old('episodesPerSeason')}}"/>
            </div>
        </div>

        <div class="d-flex justify-content-end align-items-center ">
            <button type="submit"
                    class="btn btn-success my-2">
                +
            </button>
        </div>
    </form>
</x-series.layout>
