//
// Copyright 2015 Inostudio Solutions
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#define GA_KEY @"YOUR_KEY"

@interface GAIOSManager : NSObject

+ (instancetype)createManagerWithId:(NSString *)trackerId;
+ (instancetype)getInstance;

- (void)trackSocialEventWithName:(NSString *)name
                          action:(NSString *)action
                       targetUrl:(NSString *)targetUrl;

- (void)trackScreenEventWithName:(NSString *)name;

- (void)trackEventWithCategory:(NSString *)category
                        action:(NSString *)action
                         label:(NSString *)label
                         value:(NSNumber *)value;

- (void)startSession;

- (void)endSession;

@end
