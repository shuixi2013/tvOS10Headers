/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface IKFourTuple : NSObject <NSCopying> {

	NSString* _namedStyle;
	long long _specifiedValueCount;
	double _values[4];

}

@property (nonatomic,readonly) NSString * namedStyle;                       //@synthesize namedStyle=_namedStyle - In the implementation block
@property (nonatomic,readonly) IKCornerRadii cornerRadiiValue; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsetsValue; 
-(UIEdgeInsets)edgeInsetsValue;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCornerRadii:(IKCornerRadii)arg1 ;
-(id)initWithStyleString:(id)arg1 ;
-(NSString *)namedStyle;
-(IKCornerRadii)cornerRadiiValue;
@end

