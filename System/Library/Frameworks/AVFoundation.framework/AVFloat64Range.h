/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AVFloat64Range : NSObject <NSCopying> {

	double _minimum;
	double _maximum;

}

@property (nonatomic,readonly) double minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) double maximum;              //@synthesize maximum=_maximum - In the implementation block
+(id)float64RangeWithMinimum:(double)arg1 maximum:(double)arg2 ;
+(id)float64RangeWithAudioValueRange:(AudioValueRange)arg1 ;
-(double)minimum;
-(double)maximum;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMinimum:(double)arg1 maximum:(double)arg2 ;
-(id)initWithAudioValueRange:(AudioValueRange)arg1 ;
@end

