from django.http import HttpResponse
def index(request):
  return HttpResponse("THis file is created by rishi");
def about(request):
  return HttpResponse("THis file is about rishi");
def p(request):
  return HttpResponse("THis file is administartion file");
