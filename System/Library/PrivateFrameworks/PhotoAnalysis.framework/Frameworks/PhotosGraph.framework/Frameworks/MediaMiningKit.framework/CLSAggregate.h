/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CLSAggregate : NSObject {

	NSString* _primaryDomain;

}

@property (nonatomic,retain) NSString * primaryDomain;              //@synthesize primaryDomain=_primaryDomain - In the implementation block
+(id)sharedCLSAggregate;
-(void)incrementValueForKey:(id)arg1 ;
-(void)recordValue:(id)arg1 forKey:(id)arg2 ;
-(id)_registeredKeysLookupTable;
-(id)_distributionKeys;
-(id)_scalarToAddKeys;
-(id)_allRegisteredKeys;
-(NSString *)primaryDomain;
-(id)_getSubdomain:(id)arg1 ;
-(id)_needsParsingKeys;
-(id)_stringValueTypeKeys;
-(id)_doubleValueTypeKeys;
-(id)_noOpRegisteredKeysForOSXLibraryDomain;
-(void)_recordAGGDValue:(id)arg1 forKey:(id)arg2 ;
-(id)_aggdMethodConstructionHintsForKey:(id)arg1 ;
-(id)_aggdMethodConstructionHints;
-(id)_messageTracerMethodConstructionHints;
-(id)_registeredKeysForLibraryDomain;
-(void)_recordMessageTracerValue:(id)arg1 forKey:(id)arg2 ;
-(id)_messageTracerMethodConstructionHintsForKey:(id)arg1 ;
-(id)_truncateToSignificantFigureForValue:(id)arg1 numOfSignificantDigits:(int)arg2 ;
-(void)setPrimaryDomain:(NSString *)arg1 ;
@end

