#pragma once
#ifndef MATRIX_UTILS
#define MATRIX_UTILS

#include <openvr_driver.h>

//-----------------------------------------------------------------------------
// Purpose: Calculates quaternion (qw,qx,qy,qz) representing the rotation
// from: https://github.com/Omnifinity/OpenVR-Tracking-Example/blob/master/HTC%20Lighthouse%20Tracking%20Example/LighthouseTracking.cpp
//-----------------------------------------------------------------------------
vr::HmdQuaternion_t GetRotation(vr::HmdMatrix34_t matrix);

//-----------------------------------------------------------------------------
// Purpose: Extracts position (x,y,z).
// from: https://github.com/Omnifinity/OpenVR-Tracking-Example/blob/master/HTC%20Lighthouse%20Tracking%20Example/LighthouseTracking.cpp
//-----------------------------------------------------------------------------
vr::HmdVector3_t GetPosition(vr::HmdMatrix34_t matrix);

#endif MATRIX_UTILS