/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSMachPortRight.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BSMachPortSendRight : BSMachPortRight <NSCopying>
+(id)wrapSendRight:(unsigned)arg1 ;
+(id)_rightDescription;
+(void)_queue_destroyPort:(unsigned)arg1 ;
+(id)taskNameForPID:(int)arg1 ;
+(id)taskNamePortForPID:(int)arg1 ;
+(id)bootstrapLookUpPortWithName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)bootstrapLookUpWithName:(id)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 ;
-(unsigned)sendRight;
-(BOOL)_queue_isUsable;
-(id)_initWithPort:(unsigned)arg1 previousTrace:(id)arg2 ;
-(id)_initWithCopyOfPort:(unsigned)arg1 previousTrace:(id)arg2 ;
-(BOOL)_shouldInvalidateOnEncode;
-(id)initWithCopyOfRight:(id)arg1 ;
-(id)initWithCopyOfPort:(unsigned)arg1 ;
-(id)initFromReceiveRight:(id)arg1 ;
-(id)initWithNonRetainingPort:(unsigned)arg1 ;
-(id)initWithSendRight:(unsigned)arg1 assumeOwnership:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)initWithPort:(unsigned)arg1 ;
@end

