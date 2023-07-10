<x-series.layout title="Series">
     <x-series.title title="Series"/>

    <div class="d-flex justify-content-end align-items-end my-3">
        <a href="{{route('series.create')}}" class="btn btn-success btn-sm">+</a>
    </div>

    <div class="d-flex justify-content-end align-items-end">
        <x-flash-message>
            {{$mensagemSucesso}}
        </x-flash-message>
    </div>

    <ul class="list-group">
        @foreach($series AS $serie)
            <li class="list-group-item d-flex justify-content-between align-items-center">
                {{$serie->name}}

                <span class="d-flex">
                    <a href="{{route('series.edit', $serie->id)}}" class="btn btn-primary btn-sm">Editar</a>
                    <form action="{{route('series.destroy', $serie->id)}}" class="ms-2" method="post">
                        @csrf
                        @method('DELETE')
                        <button class="btn btn-danger btn-sm">Excluir</button>
                    </form>
               </span>
            </li>
        @endforeach
    </ul>
</x-series.layout>
