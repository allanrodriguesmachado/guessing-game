<form class="form-inline" method="post" action="{{$action}}">
    @csrf

    @if($update)
        @method('PUT')
    @endif


    <div class="form-group my-3">
        <label for="name" class="sr-only">Nome da serie</label>
        <input
            type="text"
            name="name"
            id="name"
            class="form-control"
            @isset($name) value="{{$name}}" @endisset/>
    </div>

    <div class="d-flex justify-content-end align-items-center ">
        <button type="submit"
                class="btn btn-success my-2">
            +
        </button>
    </div>
</form>

