/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@interface MPVector : NSObject {

	double _vector[4];
	long long _length;

}
+(id)vectorFromString:(id)arg1 ;
+(id)vectorWithValues:(id)arg1 ;
+(id)vectorFromCGColor:(CGColorRef)arg1 ;
+(id)vectorFromMCVector:(SCD_Struct_MP3)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)CGColor;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(id)values;
-(void)setValues:(id)arg1 ;
-(double)valueAtIndex:(long long)arg1 ;
-(void)setVector:(SCD_Struct_MP3)arg1 ;
-(id)CIColorString;
-(BOOL)isEqualTo:(id)arg1 ;
-(SCD_Struct_MP3)vector;
@end

