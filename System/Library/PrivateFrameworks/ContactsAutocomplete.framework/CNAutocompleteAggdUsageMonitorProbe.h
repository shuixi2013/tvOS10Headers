/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteUsageMonitorProbe.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe> {

	CNAutocompleteAggdProbe* _aggdProbe;
	NSNumber* _selectedIndex;
	NSNumber* _selectedPredictionIndex;
	NSNumber* _lengthOfSearchString;
	NSNumber* _sourceType;
	NSNumber* _returnedDuetResults;

}

@property (nonatomic,retain) CNAutocompleteAggdProbe * aggdProbe;              //@synthesize aggdProbe=_aggdProbe - In the implementation block
@property (nonatomic,retain) NSNumber * selectedIndex;                         //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) NSNumber * selectedPredictionIndex;               //@synthesize selectedPredictionIndex=_selectedPredictionIndex - In the implementation block
@property (nonatomic,retain) NSNumber * lengthOfSearchString;                  //@synthesize lengthOfSearchString=_lengthOfSearchString - In the implementation block
@property (nonatomic,retain) NSNumber * sourceType;                            //@synthesize sourceType=_sourceType - In the implementation block
@property (nonatomic,retain) NSNumber * returnedDuetResults;                   //@synthesize returnedDuetResults=_returnedDuetResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSNumber *)selectedIndex;
-(void)setSelectedIndex:(NSNumber *)arg1 ;
-(NSNumber *)sourceType;
-(void)setSourceType:(NSNumber *)arg1 ;
-(void)sendData;
-(void)recordDuetReturnedResults:(BOOL)arg1 ;
-(void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1 ;
-(void)recordUserSelectedIndex:(unsigned long long)arg1 ;
-(void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1 ;
-(void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1 ;
-(void)recordUserIgnoredPredictionAfterDelay:(double)arg1 ;
-(void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2 ;
-(void)recordUserSawPredictions;
-(void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1 ;
-(id)initWithAggdProbe:(id)arg1 ;
-(CNAutocompleteAggdProbe *)aggdProbe;
-(void)setAggdProbe:(CNAutocompleteAggdProbe *)arg1 ;
-(void)setReturnedDuetResults:(NSNumber *)arg1 ;
-(void)setLengthOfSearchString:(NSNumber *)arg1 ;
-(void)setSelectedPredictionIndex:(NSNumber *)arg1 ;
-(NSNumber *)lengthOfSearchString;
-(NSNumber *)returnedDuetResults;
-(id)sourceKeysForSourceType:(unsigned long long)arg1 ;
-(NSNumber *)selectedPredictionIndex;
@end

