//
// Created by tang on 16/3/7.
//
#include<jni.h>

JNIEXPORT jstring JNICALL
Java_com_example_android_tang_androidstudiojnidemoforndk10_MainActivity_test(JNIEnv *env,
                                                                             jobject instance) {
    char* returnValue = "Hello World";
    return (*env)->NewStringUTF(env, returnValue);
}