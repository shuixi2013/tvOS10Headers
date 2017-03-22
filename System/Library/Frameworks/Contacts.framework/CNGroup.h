/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface CNGroup : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _identifier;
	int _iOSLegacyIdentifier;
	NSString* _name;
	CNGroup* _snapshot;
	NSDate* _creationDate;
	NSDate* _modificationDate;

}

@property (nonatomic,copy,readonly) CNGroup * snapshot; 
@property (nonatomic,copy,readonly) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * modificationDate;              //@synthesize modificationDate=_modificationDate - In the implementation block
@property (nonatomic,readonly) int iOSLegacyIdentifier;                     //@synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedStringForKey:(id)arg1 ;
+(id)identifierProvider;
+(id)makeIdentifier;
+(id)makeIdentifierString;
+(id)predicateForSubgroupsInGroupWithIdentifier:(id)arg1 ;
+(id)predicateForGroupsWithNameMatching:(id)arg1 ;
+(id)predicateForGroupWithNameMatching:(id)arg1 ;
+(id)predicateForGroupsWithIdentifiers:(id)arg1 ;
+(id)predicateForiOSLegacyIdentifier:(int)arg1 ;
+(id)predicateForGroupsInContainerWithIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CNGroup *)snapshot;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithName:(id)arg1 ;
-(NSDate *)creationDate;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 creationDate:(id)arg3 modificationDate:(id)arg4 ;
-(int)iOSLegacyIdentifier;
-(NSDate *)modificationDate;
-(id)initWithGroup:(id)arg1 ;
@end

