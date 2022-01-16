/* Copyright (c) 2022 Perlatecnica APS ETS
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/****************************************************
*            RAPID PROTOTYPING WITH NUCLEO          *
* Example Code 01: Serial                           *
* Author: Mauro D'Angelo                            *
* Organization: Perlatecnica APS ETS				*
*****************************************************/
#include "mbed.h"

UnbufferedSerial pc(USBTX, USBRX);


// Entry point
int main() {
  // Print to the serial console a string
  printf("Hello World !\r\n");
  printf("Here I'm !\r\n");
  printf("It works !\r\n");
}

// OBSERVE THAT ONCE THE MESSAGES HAVE BEEN PRINTED, NOTHING ELSE HAPPENS

// EXERCISE: Modify the printed messages