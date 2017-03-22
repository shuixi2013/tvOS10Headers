/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSClue.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, CLSEvent, CLSPerson, CLSPlace;

@interface CLSOutputClue : CLSClue <NSCoding> {

	NSMutableArray* _relatedInputTimeClues;
	NSMutableArray* _relatedInputLocationClues;
	NSMutableArray* _relatedInputPeopleClues;
	CLSEvent* _relatedEvent;
	CLSPerson* _relatedPerson;
	CLSPlace* _relatedPlace;

}

@property (retain) CLSPlace * relatedPlace;                //@synthesize relatedPlace=_relatedPlace - In the implementation block
@property (retain) CLSPerson * relatedPerson;              //@synthesize relatedPerson=_relatedPerson - In the implementation block
@property (retain) CLSEvent * relatedEvent;                //@synthesize relatedEvent=_relatedEvent - In the implementation block
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
+(id)clueWithValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(CLSEvent *)relatedEvent;
-(void)setRelatedPlace:(CLSPlace *)arg1 ;
-(void)setRelatedPerson:(CLSPerson *)arg1 ;
-(void)setRelatedEvent:(CLSEvent *)arg1 ;
-(void)addRelatedInputClues:(id)arg1 ;
-(CLSPerson *)relatedPerson;
-(id)relatedInputClues;
-(CLSPlace *)relatedPlace;
-(BOOL)isEqualToClue:(id)arg1 ;
-(id)relatedInputLocationClues;
-(id)relatedInputPeopleClues;
-(id)relatedInputTimeClues;
@end

