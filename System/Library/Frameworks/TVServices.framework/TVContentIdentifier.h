/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVContentIdentifier : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	TVContentIdentifier* _container;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) TVContentIdentifier * container;              //@synthesize container=_container - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dictionaryFromIdentifier:(id)arg1 ;
+(id)_identifierFromDictionary:(id)arg1 ;
+(id)contentIdentifierWithContentIdentifier:(id)arg1 ;
+(id)_contentIdentifierWithFlattenedRepresentation:(id)arg1 rootContainer:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVContentIdentifier *)container;
-(id)initWithIdentifier:(id)arg1 container:(id)arg2 ;
-(BOOL)isTVContentIdentifier__;
-(id)_flattenedRepresentation;
@end

