/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface ML3LanguageResources : NSObject <NSSecureCoding> {

	NSDictionary* _sectionsInfo;
	NSDictionary* _sortingDetails;
	NSString* _canonicalLanguageIdentifier;

}

@property (nonatomic,readonly) NSDictionary * sectionsInfo;                         //@synthesize sectionsInfo=_sectionsInfo - In the implementation block
@property (nonatomic,readonly) NSDictionary * sortingDetails;                       //@synthesize sortingDetails=_sortingDetails - In the implementation block
@property (nonatomic,readonly) NSString * canonicalLanguageIdentifier;              //@synthesize canonicalLanguageIdentifier=_canonicalLanguageIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSectionsInfo:(id)arg1 sortingDetails:(id)arg2 canonicalLanguageIdentifier:(id)arg3 ;
-(NSString *)canonicalLanguageIdentifier;
-(NSDictionary *)sectionsInfo;
-(NSDictionary *)sortingDetails;
@end
