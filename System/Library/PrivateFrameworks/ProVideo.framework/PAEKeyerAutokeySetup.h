/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray;

@interface PAEKeyerAutokeySetup : NSObject <NSCoding> {

	NSMutableArray* _initialSamples;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)interpolateBetween:(id)arg1 withWeight:(float)arg2 ;
-(void)setInitialSamples:(id)arg1 ;
-(id)initialSamples;
@end

