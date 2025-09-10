/****************************************************
 * 2016-2025 Eric Bachmann and Mike Zmuda
 * All Rights Reserved.
 * NOTICE:
 * Dissemination of this information or reproduction
 * of this material is prohibited unless prior written
 * permission is granted.
 ****************************************************/

#include <ctime>
#include <vector>
#include "defs.h"
#include "utilities.h"
#include "framebuffer.h"
#include "colorandmaterials.h"
#include "rasterization.h"
#include "io.h"

FrameBuffer frameBuffer(WINDOW_WIDTH, WINDOW_HEIGHT);

void render(GLFWwindow* window) {
	frameBuffer.clearColorBuffer();
	drawLine(frameBuffer, 0, 0, 100, 100, red);
	drawLine(frameBuffer, 100, 100, 200, 100, blue);
	frameBuffer.showColorBuffer();
}

int main(int argc, char* argv[]) {\
    /*
    double x = 22.3;
    double y = 99.3;
    cout<< x << ' ' << y << endl;
    swap(x,y);
    cout<< x << ' ' << y << endl;
    
    cout << "approximatelyEqual" << endl;
    cout << approximatelyEqual(3.0, 3.0) << endl;
    cout << approximatelyEqual(3.0, 4.0) << endl;
    
    cout << "approximatelyZero" << endl;
    cout << approximatelyZero(0.0) << endl;
    cout << approximatelyZero(1.0) << endl;
    cout << approximatelyZero(-1.0) << endl;
    cout << approximatelyZero(0.00000000001) << endl;
    
    cout << "normalizeDegrees" << endl;
    cout << normalizeDegrees(729) << endl;
    cout << normalizeDegrees(-729) << endl;
    cout << normalizeDegrees(369) << endl;
    cout << normalizeDegrees(-1) << endl;

    cout << "normalizeRadians" << endl;
    cout << normalizeRadians(0) << endl;
    cout << normalizeRadians(1) << endl;
    cout << normalizeRadians(3 * PI) << endl;
    cout << normalizeRadians(-31 * PI) << endl;
    
    cout << "rad2deg" << endl;
    cout << rad2deg(0) << endl;
    cout << rad2deg(3*PI) << endl;
    cout << rad2deg(2*PI) << endl;
    cout << rad2deg(1*PI) << endl;
    cout << rad2deg(-1*PI) << endl;
    
    cout << "deg2rad" << endl;
    cout << deg2rad(0) << endl;
    cout << deg2rad(360) << endl;
    cout << deg2rad(-180) << endl;
    cout << deg2rad(540) << endl;
    
    cout << "min" << endl;
    cout << min(1, 2, 3) << endl;
    cout << min(3, 2, -3) << endl;
    cout << min(.001, .0002, -.003) << endl;
    
    cout << "max" << endl;
    cout << max(1, 2, 3) << endl;
    cout << max(3, 2, -3) << endl;
    cout << max(.001, .0002, -.003) << endl;

    cout << "distancefrom" << endl;
    cout << distanceFromOrigin(0, 1) << endl;
    cout << distanceFromOrigin(1, 1) << endl;
    cout << distanceFromOrigin(-10, 30) << endl;
    
    cout << "distanceBetween" << endl;
    cout << distanceBetween(0, 0, 1, 1) << endl;
    cout << distanceBetween(10, 10, 11, 11) << endl;
    cout << distanceBetween(0, 0, 1, 1) << endl;
    cout << distanceBetween(54, 1, -34, -99) << endl;
    
    cout << "area of triangle" << endl;
    cout << areaOfTriangle(3, 4, 5) << endl;
    cout << areaOfTriangle(-3, 4, 5) << endl;
    cout << areaOfTriangle(3, 4, 50) << endl;
    */
    
    cout << "point on Circle" << endl;
    cout << pointOnCircle(glm::dvec2(0, 0), 1.0, 0);
    cout << pointOnCircle(glm::dvec2(0, 0), 1.0, glm::half_pi<double>());
    
    cout << "direction in radians" << endl;
    cout << directionInRadians(dvec2(0,0), dvec2(2,2)) << endl;;
    cout << directionInRadians(dvec2(2,10), dvec2(3,11)) << endl;
    cout << directionInRadians(dvec2(2,2), dvec2(2,0)) << endl;
    cout << directionInRadians(dvec2(1,-1), dvec2(1.3420,-1.93969)) << endl;
    
    cout << "direction in radians" << endl;
    cout << directionInRadians(dvec2(2,2)) << endl;;
    cout << directionInRadians(dvec2(0,-2)) << endl;
    
    cout << "direction in radians" << endl;
    cout << directionInRadians(0,0,2,2) << endl;;
    cout << directionInRadians(2,10,3,11) << endl;
    cout << directionInRadians(2,2,2,0) << endl;
    
    cout << "Map" << endl;
    cout << map(2, 0, 5, 10, 11) << endl;
    
    cout << "quadratic" << endl;
    cout << quadratic(1,4,3) << endl;
    cout << quadratic(1,0,0) << endl;
    cout << quadratic(-4,-2,-1) << endl;
    
    double ary [2];
    cout << "quadratic2" << endl;
    int n = quadratic(1, 4, 3, ary);
    cout << n << endl;
    cout << ary[0] << "," << ary[1] << endl;
    return 0;
	frameBuffer.setClearColor(paleGreen);
	initGraphics(WINDOW_WIDTH, WINDOW_HEIGHT, username.c_str(), render, nullptr, keyboardUtility, nullptr);
	return 0;
}
