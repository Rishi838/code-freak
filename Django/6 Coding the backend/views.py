from django.http import HttpResponse
from django.shortcuts import render
def index(request):
  return render(request,'index.html')
def analyse(request):
    dj_text=request.GET.get('text','default')
    anal_check=request.GET.get('anal','off')
    params={'purpose':'remove puctuations','analysed_text':dj_text.upper()};
    return render(request,'analyse.html',params)
