<x-series.layout title="Editar Series">
    <x-series.form :action="route('series.update', $serie->id)" :name="$serie->name" :update="true"/>
</x-series.layout>
