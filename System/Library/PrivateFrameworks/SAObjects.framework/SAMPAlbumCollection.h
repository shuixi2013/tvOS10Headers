/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAMPCollection.h>

@class NSString;

@interface SAMPAlbumCollection : SAMPCollection

@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,copy) NSString * sortArtist; 
+(id)albumCollection;
+(id)albumCollectionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)sortArtist;
-(void)setSortArtist:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setArtist:(NSString *)arg1 ;
@end

