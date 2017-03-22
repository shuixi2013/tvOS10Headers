/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/PHAssetRepresentationPersistenceObserver.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@class NSURL, NSDate, CLLocation, MapLocation, NSDictionary, NSString, PHAsset, PHAssetRepresentation, Project;

@interface Movie : NSObject <PHAssetRepresentationPersistenceObserver, NSCoding, NSCopying, PHPhotoLibraryChangeObserver> {

	BOOL _titleIsLocalizable;
	BOOL _favorite;
	int _availability;
	NSURL* _identifierURL;
	NSDate* _creationDate;
	CLLocation* _location;
	MapLocation* _mapLocation;
	NSDictionary* _userInfo;
	NSString* _assetFingerprint;
	NSString* _masterAssetFingerprint;
	double _durationInSeconds;
	PHAsset* _phAsset;
	PHAssetRepresentation* _phAssetRepresentation;
	Project* _weakProject;

}

@property (nonatomic,retain) NSDate * creationDate;                                      //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                      //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * identifierURL;                                      //@synthesize identifierURL=_identifierURL - In the implementation block
@property (assign,nonatomic) double durationInSeconds;                                   //@synthesize durationInSeconds=_durationInSeconds - In the implementation block
@property (nonatomic,retain) PHAsset * phAsset;                                          //@synthesize phAsset=_phAsset - In the implementation block
@property (nonatomic,retain) PHAssetRepresentation * phAssetRepresentation;              //@synthesize phAssetRepresentation=_phAssetRepresentation - In the implementation block
@property (assign,nonatomic) int availability;                                           //@synthesize availability=_availability - In the implementation block
@property (assign,nonatomic,__weak) Project * weakProject;                               //@synthesize weakProject=_weakProject - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,retain) MapLocation * mapLocation;                                  //@synthesize mapLocation=_mapLocation - In the implementation block
@property (assign,nonatomic) BOOL titleIsLocalizable;                                    //@synthesize titleIsLocalizable=_titleIsLocalizable - In the implementation block
@property (assign,getter=isFavorite,nonatomic) BOOL favorite;                            //@synthesize favorite=_favorite - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * assetFingerprint;                                //@synthesize assetFingerprint=_assetFingerprint - In the implementation block
@property (nonatomic,retain) NSString * masterAssetFingerprint;                          //@synthesize masterAssetFingerprint=_masterAssetFingerprint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(void)replaceURL:(id)arg1 withURL:(id)arg2 ;
+(void)mediaserverdCrashed;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(int)duration;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(CGAffineTransform)transform;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(CLLocation *)location;
-(id)awakeAfterUsingCoder:(id)arg1 ;
-(CGSize)naturalSize;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(MapLocation *)mapLocation;
-(void)setMapLocation:(MapLocation *)arg1 ;
-(double)durationInSeconds;
-(BOOL)isDeleted;
-(BOOL)isFavorite;
-(void)setFavorite:(BOOL)arg1 ;
-(CGSize)naturalSizeWithTransform;
-(PHAsset *)phAsset;
-(BOOL)isHighFrameRate;
-(id)initWithAssetRepresentation:(id)arg1 ;
-(float)frameRate;
-(NSURL *)identifierURL;
-(void)stealthlySetIdentifierURL:(id)arg1 ;
-(PHAssetRepresentation *)phAssetRepresentation;
-(void)setAvailability:(int)arg1 ;
-(int)availability;
-(void)updateLocation;
-(void)updateAssetAvailability;
-(BOOL)titleIsLocalizable;
-(BOOL)isKenBurnsMovie;
-(id)plistRepresentation;
-(id)initWithIdentifierURL:(id)arg1 ;
-(BOOL)isOnline;
-(void)replaceURL:(id)arg1 withURL:(id)arg2 ;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(void)persistenceStateOfAssetRepresentationDidChange:(id)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)hasAudioTracks;
-(CGSize)encodedPixelSizeWithTransform;
-(CGSize)encodedPixelSize;
-(BOOL)isOffline;
-(id)initWithIdentifierURL:(id)arg1 userInfo:(id)arg2 ;
-(void)updateMetadata;
-(BOOL)attemptRepairWithFingerprint;
-(void)updateCreationDate;
-(BOOL)isUnsupportedFormat;
-(void)mediaserverdCrashed;
-(BOOL)hasVideoTracks;
-(BOOL)isMono;
-(void)updateAsset;
-(void)addToList;
-(void)setPhAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(void)setPhAsset:(PHAsset *)arg1 ;
-(void)removeFromList;
-(NSString *)assetFingerprint;
-(NSString *)masterAssetFingerprint;
-(Project *)weakProject;
-(void)setWeakProject:(Project *)arg1 ;
-(void)setAssetFingerprint:(NSString *)arg1 ;
-(void)setMasterAssetFingerprint:(NSString *)arg1 ;
-(void)setTitleIsLocalizable:(BOOL)arg1 ;
-(id)resolveRelativePath:(id)arg1 ;
-(void)syncFavorite;
-(void)updateDuration;
-(void)updateFavorite;
-(void)setDurationInSeconds:(double)arg1 ;
-(id)decodeIdentifierURLWithCoder:(id)arg1 ;
-(BOOL)isTimelapse;
@end

