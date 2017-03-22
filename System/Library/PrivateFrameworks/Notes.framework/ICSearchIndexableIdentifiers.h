/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Notes/Notes-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/ICPropertyListSerializable.h>

@class NSOrderedSet;

@interface ICSearchIndexableIdentifiers : NSObject <NSCopying, NSMutableCopying, ICPropertyListSerializable> {

	NSOrderedSet* _identifiers;

}

@property (nonatomic,readonly) NSOrderedSet * identifiers;              //@synthesize identifiers=_identifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)array;
-(id)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)orderedSet;
-(id)objectIdentifiers;
-(id)initWithPropertyListObjectRepresentation:(id)arg1 version:(long long)arg2 ;
-(id)propertyListObjectRepresentation;
-(id)initWithAssignedOrderedSet:(id)arg1 ;
-(id)initWithSearchIndexableIdentifier:(id)arg1 ;
-(id)initForAnyContextWithObjectIdentifiers:(id)arg1 ;
-(id)searchIndexableIdentifierAtIndex:(unsigned long long)arg1 ;
-(NSOrderedSet *)identifiers;
-(id)initWithOrderedSet:(id)arg1 ;
@end

