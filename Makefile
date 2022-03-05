inc 	= -IC:\opencv\my-build\include
lib-dir	= -LC:\opencv\my-build\x64\mingw\bin -LC:\opencv\my-build\x64\mingw\lib

lib		:= -llibopencv_calib3d455 -llibopencv_core455 -llibopencv_dnn455 -llibopencv_features2d455 
lib		:= -llibopencv_flann455 -llibopencv_highgui455 -llibopencv_imgcodecs455 -llibopencv_imgproc455 
lib		:= -llibopencv_ml455 -llibopencv_objdetect455 -llibopencv_photo455 
lib		:= -llibopencv_shape455 -llibopencv_stitching455 -llibopencv_superres455 
lib		:= -llibopencv_video455 -llibopencv_videoio455 -llibopencv_videoio455 -llibopencv_video455


default:
	g++  $(inc) $(lib-dir) $(lib) main.cpp  -o app
