/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_i3mainz_pcl_visualization_Visualizer */

#ifndef _Included_de_i3mainz_pcl_visualization_Visualizer
#define _Included_de_i3mainz_pcl_visualization_Visualizer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    alloc
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_alloc
  (JNIEnv *, jobject);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    wasStopped
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_wasStopped
  (JNIEnv *, jobject);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    spinOnce
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_spinOnce
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    setWindowName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_setWindowName
  (JNIEnv *, jobject, jstring);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    setBackgroundColor
 * Signature: (FFF)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_setBackgroundColor
  (JNIEnv *, jobject, jfloat, jfloat, jfloat);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    removePointCloud
 * Signature: (Ljava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_removePointCloud
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    removeAllPointClouds
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_removeAllPointClouds
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    addCoordinateSystem
 * Signature: (DI)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_addCoordinateSystem__DI
  (JNIEnv *, jobject, jdouble, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    addCoordinateSystem
 * Signature: (DLjava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_addCoordinateSystem__DLjava_lang_String_2I
  (JNIEnv *, jobject, jdouble, jstring, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    removeCoordinateSystem
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_removeCoordinateSystem__I
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    removeCoordinateSystem
 * Signature: (Ljava/lang/String;I)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_removeCoordinateSystem__Ljava_lang_String_2I
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    removeAllCoordinateSystems
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_removeAllCoordinateSystems
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    setPointSize
 * Signature: (ILjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_setPointSize
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     de_i3mainz_pcl_visualization_Visualizer
 * Method:    initCameraParameters
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_i3mainz_pcl_visualization_Visualizer_initCameraParameters
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
