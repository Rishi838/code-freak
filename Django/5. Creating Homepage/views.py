from django.http import HttpResponse
from django.shortcuts import render
par={'name':'harry','place':'hisar'}
def index(request):
  return render(request,'index.html',par)
def page2(request):
    dj_text=request.GET.get('text','default')
    return HttpResponse(dj_text)
