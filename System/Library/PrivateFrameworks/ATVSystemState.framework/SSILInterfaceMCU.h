/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSystemState.framework/ATVSystemState
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSystemState/ATVSystemState-Structs.h>
#import <ATVSystemState/SSILInterface.h>

@interface SSILInterfaceMCU : SSILInterface {

	IOHIDServiceClientRef _service;
	IOHIDEventSystemClientRef _client;

}
-(void)dealloc;
-(id)init;
-(IOHIDServiceClientRef)_getService;
-(id)_indicatorLightStateToString:(unsigned long long)arg1 ;
-(BOOL)setState:(unsigned long long)arg1 error:(id*)arg2 ;
@end

