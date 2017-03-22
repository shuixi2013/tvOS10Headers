/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:23 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMCore/FMCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FMWeakWrapper : NSObject <NSCopying> {

	id _object;
	unsigned long long _objectHash;

}

@property (assign,nonatomic,__weak) id object;                           //@synthesize object=_object - In the implementation block
@property (assign,nonatomic) unsigned long long objectHash;              //@synthesize objectHash=_objectHash - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(void)setObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 ;
-(void)setObjectHash:(unsigned long long)arg1 ;
-(unsigned long long)objectHash;
@end

