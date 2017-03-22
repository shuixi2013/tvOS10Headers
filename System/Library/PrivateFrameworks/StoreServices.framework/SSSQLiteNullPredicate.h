/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSSQLitePropertyPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SSSQLiteNullPredicate : SSSQLitePropertyPredicate <NSCopying> {

	BOOL _matchesNull;

}

@property (nonatomic,readonly) BOOL matchesNull;              //@synthesize matchesNull=_matchesNull - In the implementation block
+(id)isNotNullPredicateWithProperty:(id)arg1 ;
+(id)isNullPredicateWithProperty:(id)arg1 ;
-(id)SQLForEntityClass:(Class)arg1 ;
-(BOOL)matchesNull;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

