/*
   Glassomium - web-based TUIO-enabled window manager
   http://www.glassomium.org

   Copyright 2012 The Glassomium Authors

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/
   
#ifndef SYSTEMWINDOW_H
#define SYSTEMWINDOW_H

#include "stdafx.h"
#include "Window.h"

using namespace std;

namespace pt{

/** This class displays system panels and content that is not the classical user window */
class SystemWindow : public Window {
public:
	SystemWindow(float normalizedWidth, float normalizedHeight);
    virtual ~SystemWindow();

	virtual void injectJavascriptResources();
	virtual WindowType getType(){ return System; }
protected:

private:

};

}

#endif
