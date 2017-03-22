/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSHashBuilder : NSObject {

	unsigned long long _hash;

}
+(id)builder;
-(id)appendCGFloat:(double)arg1 ;
-(id)appendFloat:(float)arg1 ;
-(void)_append:(unsigned long long)arg1 ;
-(id)appendPointer:(void*)arg1 ;
-(id)appendHashingBlocks:(/*^block*/id)arg1 ;
-(id)appendPoint:(CGPoint)arg1 ;
-(id)appendSize:(CGSize)arg1 ;
-(id)appendObject:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)appendUnsignedInteger:(unsigned long long)arg1 ;
-(id)appendInteger:(long long)arg1 ;
-(id)appendBool:(BOOL)arg1 ;
-(id)appendArray:(id)arg1 ;
-(id)appendDouble:(double)arg1 ;
-(id)appendRect:(CGRect)arg1 ;
@end

