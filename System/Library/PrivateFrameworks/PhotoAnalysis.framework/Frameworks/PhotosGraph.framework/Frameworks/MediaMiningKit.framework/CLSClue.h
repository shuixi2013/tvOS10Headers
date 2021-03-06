/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, CLSInformant, CLSProfile;

@interface CLSClue : NSObject <NSCoding> {

	BOOL _transient;
	NSString* _key;
	id _value;
	double _confidence;
	double _relevance;
	CLSInformant* _informant;
	CLSProfile* _profile;
	NSString* _informantIdentifier;
	NSString* _profileIdentifier;
	unsigned long long _versionCount;

}

@property (copy) NSString * key;                                 //@synthesize key=_key - In the implementation block
@property (retain) id value;                                     //@synthesize value=_value - In the implementation block
@property (assign) double confidence;                            //@synthesize confidence=_confidence - In the implementation block
@property (assign) double relevance;                             //@synthesize relevance=_relevance - In the implementation block
@property (retain) CLSInformant * informant;                     //@synthesize informant=_informant - In the implementation block
@property (retain) CLSProfile * profile;                         //@synthesize profile=_profile - In the implementation block
@property (retain) NSString * informantIdentifier;               //@synthesize informantIdentifier=_informantIdentifier - In the implementation block
@property (retain) NSString * profileIdentifier;                 //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (assign) BOOL transient;                               //@synthesize transient=_transient - In the implementation block
@property (assign) unsigned long long versionCount;              //@synthesize versionCount=_versionCount - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 ;
+(id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)integerValue;
-(double)doubleValue;
-(NSString *)key;
-(long long)compare:(id)arg1 ;
-(id)value;
-(void)setValue:(id)arg1 ;
-(id)stringValue;
-(void)setKey:(NSString *)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(double)score;
-(unsigned long long)enumValue;
-(BOOL)transient;
-(void)setTransient:(BOOL)arg1 ;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(CLSProfile *)profile;
-(void)setInformant:(CLSInformant *)arg1 ;
-(void)setProfile:(CLSProfile *)arg1 ;
-(double)relevance;
-(void)setRelevance:(double)arg1 ;
-(NSString *)informantIdentifier;
-(void)setInformantIdentifier:(NSString *)arg1 ;
-(CLSInformant *)informant;
-(unsigned long long)versionCount;
-(long long)compareScore:(id)arg1 ;
-(unsigned long long)valueHash;
-(void)_incrementVersionCount;
-(BOOL)isEqualToClue:(id)arg1 ;
-(void)setVersionCount:(unsigned long long)arg1 ;
@end

