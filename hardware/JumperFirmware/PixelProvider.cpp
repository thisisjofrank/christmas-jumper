// 
// 
// 

#include "PixelProvider.h"

api_response pixel_provider::invalid_api_response()
{
  return { false, "" , -1, -1, -1, "", "" };
}

api_response pixel_provider::no_data_loaded()
{
  return { false, "" , -1, -1, -1, "", "" };
}
