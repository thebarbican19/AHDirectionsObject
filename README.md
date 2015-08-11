<h3>About</h3>
AHDirectionsObject is an NSObject class designed to make opening other maps applications a breeze. This class is developed for our newest iOS App [All Hours](https://itunes.apple.com/gb/app/all-hours/id1000983835?mt=8), please be sure to check it out!


Supports
<li>Apple Maps (Obviously)<l1>
<li>Citymapper<l1>
<li>Google Maps<l1>
<li>Waze<l1>

<h3>Setup</h3>
Add the <strong>AHDirectionsObject.h</strong> & <strong>AHDirectionsObject.m</strong> files to your project.
In your .h file add <code>#import "AHDirectionsObject.h"</code>
In your .m file add 
<pre>
AHDirectionsObject *directions = [[AHDirectionsObject alloc] init];
</pre>

<h3>Installed Applications</h3>
To return a list (NSArray) of the available (installed) map services on the users device simple call...
<pre>
[directions directionsApplications];
</pre>
<br/>

<h3>Open Application</h3>
To open a specifyed application call the <code>directionsHandle</code>. This method has two parameters - the location (<code>CLLocation</code>) and the type of application (<code>NSString</code>)<br>
<pre>
[directions directionsHandle:[[CLLocation alloc] initWithLatitude:YOUR_LATITUDE_FLOAT longitude:YOUR_LONGITUDE_FLOAT] type:@"citymapper"];

</pre>
<br/>
They <strong>type</strong> key accepts...
<li>citymapper - (Citymapper)<l1>
<li>google - (Google Maps)<l1>
<li>waze - (Waze Maps)<l1>
<p>
<strong>Or</strong>, set as <code>nil</code> to open the native Apple Maps.

<br/>
<h3>Notes</h3>
If a application <code>type</code> is passed which is not available the class <strong>will</strong> revert to <strong>Apple Maps</strong>



