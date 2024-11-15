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

#ifndef GESTUREEVENT_H
#define GESTUREEVENT_H

#include "stdafx.h"

class Gesture;

struct GestureEvent {
	Gesture *gesture;
	sf::Vector2f location; // Expressed in screen coordinates
	int windowId;

	GestureEvent(Gesture *gesture, sf::Vector2f location, int windowId)
		: gesture(gesture), location(location), windowId(windowId){
	}
	~GestureEvent(){}

};

#endif
