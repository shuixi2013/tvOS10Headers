/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _NSProgressFraction : NSObject <NSSecureCoding, NSCopying> {

	long long _completed;
	long long _total;
	BOOL _overflowed;

}

@property (assign) long long completed;              //@synthesize completed=_completed - In the implementation block
@property (assign) long long total;                  //@synthesize total=_total - In the implementation block
@property (readonly) BOOL overflowed; 
+(id)fractionWithCompleted:(long long)arg1 total:(long long)arg2 ;
+(id)fractionWithDouble:(double)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)simplify;
-(BOOL)isNaN;
-(long long)total;
-(id)fractionBySimplifying;
-(void)_simplifyFromDouble:(double)arg1 ;
-(void)addFraction:(id)arg1 ;
-(void)subtractFraction:(id)arg1 ;
-(void)multiplyByFraction:(id)arg1 ;
-(id)initWithCompleted:(long long)arg1 total:(long long)arg2 ;
-(BOOL)isFractionCompletedEqual:(id)arg1 ;
-(BOOL)overflowed;
-(id)fractionByAddingFraction:(id)arg1 ;
-(id)fractionBySubtractingFraction:(id)arg1 ;
-(void)divideByValue:(long long)arg1 ;
-(id)fractionByMultiplyingFraction:(id)arg1 ;
-(void)setTotal:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCompleted:(long long)arg1 ;
-(BOOL)isIndeterminate;
-(double)fractionCompleted;
-(BOOL)isFinished;
-(long long)completed;
@end

