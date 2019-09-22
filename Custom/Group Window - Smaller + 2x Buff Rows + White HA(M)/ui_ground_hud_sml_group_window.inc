	<Page
		AllowLookAtTargetSelection='true'
		BackgroundColor='#FFFFFF'
		Location='0,125'
		MaximumSize='242,16384'
		MinimumSize='242,66'
		Name='smlgroupwin'
		OnDisableEffector='/effectors.opacity.bg.fadeout'
		OnEnableEffector='/effectors.opacity.bg.fadethreequarter'
		RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
		ScrollExtent='242,66'
		Size='242,66'
		SizeIncrement='1,66'
		TextOpacityRelativeApply='true'
		TextOpacityRelativeMin='0.80'
		UserMovable='true'
		UserResizable='true'
	>
		<Data
			Name='CodeData'
			sample='sample'
		/>
		<Page
			BackgroundColor='#0000FF'
			MaximumSize='242,66'
			MinimumSize='242,66'
			Name='sample'
			OnEnableEffector='/Effectors.Fadefull'
			ScrollExtent='242,66'
			Selectable='true'
			Size='242,66'
			TextOpacityRelativeApply='true'
			TextOpacityRelativeMin='0.80'
		>
			<Data
				combatEffector='combatEffector'
				combatEffectorTarget='vsp.role'
				conEven='vsp.con.con_even'
				conHiger='vsp.con.con_higher'
				conLower='vsp.con.con_lower'
				directionArrow='vsp.arrow'
				level='vsp.role.targetLevel'
				Name='CodeData'
				pagea='ham.a'
				pageh='ham.h'
				pagem='ham.m'
				role='vsp.role'
				roleIcon='vsp.role.icon'
				samplestateicon='sampleStateIcon'
				states='states'
				textDistance='textDistance'
				textname='textName'
				volumedebuff='debuff'
				volumestates='states'
			/>
			<ColorEffector
				Cycling='true'
				ForceColor='true'
				Name='combatEffector'
				RestoreColor='true'
				Speed='3.00'
				TargetColor='#FF0000'
				TargetColor2='#FFFFFF'
			/>
			<Page
				Location='33,12'
				Name='ham'
				OnEnableEffector=' /Effectors.Fadefull'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				ScrollExtent='186,17'
				Size='186,17'
				TextOpacityRelativeApply='true'
				TextOpacityRelativeMin='0.80'
			>
				<Page
					Name='h'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='186,8'
					Size='186,8'
				>
					<Data
						back='bar.back'
						cap='bar.cap'
						juice='bar.juice'
						moves='bar.move'
						Name='CodeData'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						MinimumSize='0,4'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='186,7'
						Size='186,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							Location='37,0'
							MinimumSize='15,2'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='29,7'
							Size='29,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='168,0'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='18,7'
							Size='18,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							MinimumSize='20,0'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='108,7'
							Size='108,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FFFFFF'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='186,7'
							Size='186,7'
						/>
					</Page>
				</Page>
				<Page
					Location='0,8'
					MinimumSize='5,4'
					Name='a'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='186,8'
					Size='186,8'
				>
					<Data
						back='bar.back'
						cap='bar.cap'
						juice='bar.juice'
						moves='bar.move'
						Name='CodeData'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						MinimumSize='0,4'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='186,7'
						Size='186,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#1DE306'
							Location='39,0'
							MinimumSize='15,2'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='29,7'
							Size='29,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='168,0'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='18,10'
							Size='18,10'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#00FF00'
							MinimumSize='20,0'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='108,7'
							Size='108,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FFFFFF'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='186,7'
							Size='186,7'
						/>
					</Page>
				</Page>
				<Page
					Location='0,8'
					MinimumSize='5,4'
					Name='m'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='186,6'
					Size='186,6'
					Visible='false'
				>
					<Data
						back='bar.back'
						cap='bar.cap'
						juice='bar.juice'
						moves='bar.move'
						Name='CodeData'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						MinimumSize='0,4'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='186,7'
						Size='186,7'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#095FFF'
							Location='48,0'
							MinimumSize='15,2'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='66,7'
							Size='66,7'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='168,0'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='18,7'
							Size='18,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#0000FF'
							MinimumSize='20,0'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='146,7'
							Size='146,7'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FFFFFF'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='186,7'
							Size='186,7'
						/>
					</Page>
				</Page>
				<Page
					Location='0,1'
					Name='c'
					Orientation='horizontal'
					PackLocation='nfn,nfn'
					PackSize='a,p'
					ScrollExtent='186,15'
					Size='186,15'
					Visible='false'
				>
					<Data
						back='bar.back'
						cap='bar.cap'
						juice='bar.juice'
						moves='bar.move'
						Name='CodeData'
					/>
					<Page
						BackgroundColor='#FFFFFF'
						MinimumSize='0,4'
						Name='Bar'
						PackSize='a,1'
						RStyleDefault='/Styles.ham_new.bar.rs_default'
						ScrollExtent='186,15'
						Size='186,15'
					>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							Location='37,0'
							MinimumSize='15,2'
							Name='move'
							PackLocation='nfn,fff'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='29,15'
							Size='29,15'
							Visible='false'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#000000'
							Location='168,0'
							Name='cap'
							PackLocation='fpf'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='18,15'
							Size='18,15'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FF0000'
							MinimumSize='20,0'
							Name='juice'
							PackLocation='nfn,nfn'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='108,15'
							Size='108,15'
						/>
						<Page
							BackgroundColor='#FFFFFF'
							BackgroundOpacity='1.00'
							BackgroundTint='#FFFFFF'
							Name='back'
							PackSize='p,1'
							RStyleDefault='/Styles.mfd.statusbars_small.current.rs_default'
							ScrollExtent='186,15'
							Size='186,15'
						/>
					</Page>
				</Page>
			</Page>
			<VolumePage
				BackgroundColor='#FFFFFF'
				BackgroundTint='#000000'
				CellAlignmentH='left'
				CellCount='12,2'
				CellPadding='0,0'
				CellSelectable='false'
				CellSelectionOverlayOpacity='1.00'
				CellSize='18,18'
				GetsInput='false'
				Location='22,30'
				MaximumSize='16384,18'
				MinimumScrollExtent='132,18'
				MinimumSize='0,18'
				Name='states'
				OpacityRelativeMin='1.00'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='216,18'
				Size='216,18'
			>
				<Image
					Color='#54E4FE'
					LocalTooltip='st'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.cover'
					Tooltip='st'
				/>
				<Image
					Color='#54E4FE'
					Location='18,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.cover'
				/>
				<Image
					Color='#54E4FE'
					Location='36,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.combat'
				/>
				<Image
					Color='#54E4FE'
					Location='54,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.peace'
				/>
				<Image
					Color='#54E4FE'
					Location='72,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.aiming'
				/>
				<Image
					Color='#54E4FE'
					Location='90,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='108,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='126,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='144,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='162,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='180,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='198,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
			</VolumePage>
			<VolumePage
				BackgroundColor='#FFFFFF'
				BackgroundTint='#000000'
				CellAlignmentH='left'
				CellCount='12,1'
				CellCountFixed='12,1'
				CellPadding='0,0'
				CellSelectable='false'
				CellSelectionOverlayOpacity='1.00'
				CellSize='18,18'
				GetsInput='false'
				Location='22,48'
				MaximumSize='16384,18'
				MinimumScrollExtent='132,18'
				MinimumSize='0,18'
				Name='debuff'
				OpacityRelativeMin='1.00'
				PackLocation='fff,fff'
				PackSize='f,f'
				ScrollExtent='216,18'
				Size='216,18'
				SizeIncrement='0,18'
			>
				<Image
					Color='#54E4FE'
					LocalTooltip='st'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.cover'
					Tooltip='st'
				/>
				<Image
					Color='#54E4FE'
					Location='18,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.cover'
				/>
				<Image
					Color='#54E4FE'
					Location='36,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.combat'
				/>
				<Image
					Color='#54E4FE'
					Location='54,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.peace'
				/>
				<Image
					Color='#54E4FE'
					Location='72,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.aiming'
				/>
				<Image
					Color='#54E4FE'
					Location='90,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='108,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='126,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='144,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='162,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='180,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
				<Image
					Color='#54E4FE'
					Location='198,0'
					MaximumSize='18,18'
					MinimumSize='11,11'
					Name='i'
					PalColor='icondefault'
					ScrollExtent='18,18'
					Size='18,18'
					Style='/Styles.Icon.state.alert'
				/>
			</VolumePage>
			<Image
				BackgroundColor='#FFFFFF'
				Color='#62FF15'
				Location='230,-1'
				Name='IconFocus'
				OpacityRelativeMin='1.00'
				PackLocation='fff,nfn'
				PackSize='f,f'
				PalColor='contrast1'
				ScrollExtent='13,12'
				Size='13,12'
				SourceRect='493,221,482,211'
				SourceResource='ui_rebel_final'
			/>
			<Text
				Font='normal_12'
				LocalText='1875m'
				Location='192,0'
				Margin='0,0,10,0'
				MaxLines='1'
				Name='textDistance'
				PackSize='a,f'
				ScrollExtent='56,15'
				Size='56,15'
				TextAlignment='Right'
				TruncateElipsis='false'
			>1875m</Text>
			<Text
				Font='bold_12'
				LocalText='xxx target name'
				Location='30,0'
				MaxLines='1'
				Name='textName'
				PackLocation='nfn,nfn'
				PackSize='a,f'
				PalText='contrast1'
				ScrollExtent='168,15'
				Size='168,15'
				TextColor='#62FF15'
			>xxx target name</Text>
			<Image
				Color='#54E4FE'
				LocalTooltip='tooltip'
				Location='143,20'
				MaximumSize='20,20'
				MinimumSize='20,20'
				Name='sampleStateIcon'
				OnDisable='opacity=0'
				OnEnableEffector='/effectors.opacity.fast.fadefull'
				PalColor='icondefault'
				ScrollExtent='20,20'
				Size='20,20'
				Style='/Styles.Icon.state.cover'
				Tooltip='tooltip'
				Visible='false'
			/>
			<Page
				ContextToParent='true'
				MaximumSize='16384,300'
				Name='vsp'
				PackLocation='nfn,fff'
				PackSize='a,a'
				RStyleDefault='rs_default'
				ScrollExtent='242,31'
				Size='242,31'
			>
				<Page
					Name='con'
					Opacity='0.00'
					ScrollExtent='10,9'
					Size='10,9'
				>
					<Image
						BackgroundColor='#42FF00'
						BackgroundTint='#42FF00'
						Color='#54E4FE'
						LocalTooltip='post'
						Location='-112,-14'
						MaximumSize='28,28'
						MinimumSize='28,28'
						Name='con_lower'
						PackLocation='cfc,cfc'
						PackSize='f,p'
						PalColor='icondefault'
						ScrollExtent='28,28'
						Size='28,28'
						Style='/Styles.UIv2.CON.con_lower'
						Tooltip='post'
					/>
					<Image
						BackgroundColor='#42FF00'
						BackgroundTint='#42FF00'
						Color='#54E4FE'
						LocalTooltip='post'
						Location='-112,-14'
						MaximumSize='28,28'
						MinimumSize='28,28'
						Name='con_higher'
						PackLocation='cfc,cfc'
						PackSize='f,p'
						PalColor='icondefault'
						ScrollExtent='28,28'
						Size='28,28'
						Style='/Styles.UIv2.CON.con_higher'
						Tooltip='post'
						Visible='false'
					/>
					<Image
						BackgroundColor='#42FF00'
						BackgroundTint='#42FF00'
						Color='#54E4FE'
						LocalTooltip='post'
						Location='-112,-14'
						MaximumSize='28,28'
						MinimumSize='28,28'
						Name='con_even'
						PackLocation='cfc,cfc'
						PackSize='f,p'
						PalColor='icondefault'
						ScrollExtent='28,28'
						Size='28,28'
						Style='/Styles.UIv2.CON.con_even'
						Tooltip='post'
						Visible='false'
					/>
				</Page>
				<Image
					ContextToParent='true'
					Location='221,11'
					Name='arrow'
					OpacityRelativeMin='0.70'
					PackLocation='fff'
					Rotation='0.30'
					ScrollExtent='17,17'
					Size='17,17'
					SourceRect='482,309,506,334'
					SourceResource='ui_rebel_final'
				/>
				<Page
					BackgroundOpacity='1.00'
					Name='role'
					OpacityRelativeMin='1.00'
					PackLocation='nfn,nfn'
					PackSize='f,a'
					RStyleDefault='/Styles.window.mfd.mfd3.rs_default'
					ScrollExtent='27,30'
					Size='27,30'
				>
					<Text
						BackgroundColor='#00FF00'
						Font='bold_12'
						LocalText='100'
						Location='1,18'
						MaximumSize='23,12'
						MinimumSize='22,12'
						Name='targetLevel'
						ScrollExtent='23,12'
						Size='23,12'
						TextAlignment='Center'
						TextAlignmentVertical='Center'
					>100</Text>
					<Image
						BackgroundColor='#FFFFFF'
						LocalTooltip='[@ui_role_tooltip:none]'
						Location='-1,0'
						Name='icon'
						PackLocation='cfc,cfc'
						PackSize='f,f'
						ScrollExtent='25,25'
						Size='25,25'
						Style='/Styles.Icon.role._none'
						Tooltip='@ui_role_tooltip:none'
					/>
				</Page>
			</Page>
			<Page
				BackgroundOpacity='1.00'
				GetsInput='false'
				Location='20,0'
				Name='back'
				PackLocation='nfn,nfn'
				PackSize='a,a'
				RStyleDefault='/Styles.window.mfd.mfd_back.rs_default'
				ScrollExtent='222,30'
				Size='222,30'
			/>
		</Page>
	</Page>