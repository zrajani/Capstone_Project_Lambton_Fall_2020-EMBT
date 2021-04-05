# i-LETTERBOX (INTELLIGENT LETTERBOX)

This Repository is maintained for the Capstone Project to be carried out as part of requirements towards the course completion for the Fall 2020. The duration of the project would for 4 months starting from <b><u>September 14, 2020 - December 21, 2020</b></u>. 

The contributors for this repository would be [Zain Rajani](https://github.com/zrajani)

This Capstone Project would be guided under the supervision of [Dr. Mike Aleshams, Professor](https://github.com/mikeshams)

This page shall be having folders relating to the Capstone Project which would be as follows:

1. <b>Presentation & Reports</b>: All Presentation files for demonstrating the project as well showcasing the project timeline along with final report for the project shall be present here.

2. <b>Project Proposal</b>: Series of the proposal were made before the final approval was given by the guide. One can find all version of proposal in this folder

3. <b>Codes</b>: All the programming required for the Capstone shall be present here

4. <b>Hardware</b>: Any Special Hardware related document or file would be present here.

5. <b>Schematic Capture and PCB Design</b>: Schematics required for the project shall be uploaded in this folder and also the PCB design for the intended project

  
## i-LETTERBOX Description
  
Letters are an important part of daily business. People receive letters either from the government offices for either tax payments, or approval of their loans and schemes etc. Thus people at times forget to check their mailboxes and some days people don’t get the mails at all. Thus, a system was needed where when any letter arrived for the user he/she must be notified or must be made aware of through some system.

Thus during the span in the future we try to build and modify the existing system with the help of IR Sensor to count number of letters, LDR to reset the counter and GSM/ Cloud Service to update the user. A simplified block daigram can be seen which we will try to accomplish. 

<p align="center">
<img src="https://github.com/zrajani/iLETTERBOX_CAPSTONE_PROJECT_EMBT_F2020/blob/master/Images/Block_Daigram_Project_G8.jpg" alt="Project Block Daigram">
 </p>

Through this project we demonstrate the use of commnication protocols such as the IEEE 802.11 (WiFi), Serial GPIOs, Serial UART also using the Cloud service called as ThingsSpeak and the transfer the data to the cloud via the MQTT

The working can be explained/ learned using the animated picture below: 

<img src="https://github.com/zrajani/iLETTERBOX_CAPSTONE_PROJECT_EMBT_F2020/blob/master/Images/Group%208%20Creative%20Engineering%20Drawing.jpg" alt="Animated Project Working Image">

## Required Hardware and Software

To complete this capstone following Hardware and Software would be required (Click on them to see their appearance or incase if you wish to buy)

### Hardware Components:
1. [BeagleBone Wireless (BB-WI)](https://www.digikey.ca/en/products/detail/ghi-electronics,-llc/BBBWL-SC-562/6211000?utm_adgroup=Evaluation%20Boards%20-%20Embedded%20%20MCU%2C%20DSP&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Development%20Boards%2C%20Kits%2C%20Programmers&utm_term=&productid=6211000&gclid=Cj0KCQjwit_8BRCoARIsAIx3Rj5jebJLNbDC-QvuHFgIUrFodQ5pvV5msC6oXZQIGB48GopAPSD_hT4aAnXmEALw_wcB)
2. [Power Adapter Type C 5V,2A](https://www.creatroninc.com/product/5v-2a-switching-power-supply/)
3. [LED](https://www.digikey.ca/en/products/detail/rohm-semiconductor/SLR-56VR3F/636992?utm_adgroup=LED%20Indication%20-%20Discrete&utm_source=google&utm_medium=cpc&utm_campaign=Shopping_Product_Optoelectronics&utm_term=&productid=636992&gclid=CjwKCAjw2dD7BRASEiwAWCtCbyIG4YZBKt0sgAISDEbtyR3n9TbIASLR2VqWdQLKDTC-MQSCeFqfYhoCQn0QAvD_BwE)
4. [GSM SIM900 Ardiuno Sheild](https://www.amazon.ca/gp/product/B07XY79G56/ref=ppx_yo_dt_b_asin_title_o02_s00?ie=UTF8&psc=1)
5. [LDR Module](https://www.amazon.ca/Generic-Photoresistor-Detection-Photosensitive-Arduino/dp/B00VUQ6CU0/ref=pd_bxgy_2/132-5760972-8575215?_encoding=UTF8&pd_rd_i=B00VUQ6CU0&pd_rd_r=ed0f7b16-fc99-4999-9c48-257f7b9cd762&pd_rd_w=0mOoi&pd_rd_wg=teR3a&pf_rd_p=651c6196-5161-4602-81e9-26b0f9bf89e1&pf_rd_r=CD5KQFN9567QKF03RESM&psc=1&refRID=CD5KQFN9567QKF03RESM)
6. [IR Sensor](https://www.amazon.ca/gp/slredirect/picassoRedirect.html/ref=pa_sp_atf_electronics_sr_pg1_1?ie=UTF8&adId=A062407615CX62G3DMZTA&url=%2FGikfun-Infrared-Obstacle-Avoidance-EK1254x5C%2Fdp%2FB07FFM7DYQ%2Fref%3Dsr_1_1_sspa%3Fdchild%3D1%26keywords%3DIR%2Bsensor%26qid%3D1603200729%26s%3Delectronics%26sr%3D1-1-spons%26psc%3D1&qualifier=1603200729&id=5553384043873663&widgetName=sp_atf)
7. [Power Supply for GSM Module barrel jack 5V, 2A](https://www.amazon.ca/AC100V-240V-3000mA-Adapter-Supply-5-5x2-5mm/dp/B07DQR919Y/ref=asc_df_B07DQR919Y/?tag=googleshopc0c-20&linkCode=df0&hvadid=335455954923&hvpos=&hvnetw=g&hvrand=5136723120768300298&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000899&hvtargid=pla-886214471277&psc=1)
8. [Connecting Wires/ Jumper Wires](https://www.amazon.ca/Elegoo-120pcs-Multicolored-Breadboard-arduino/dp/B01EV70C78/ref=asc_df_B01EV70C78/?tag=googleshopc0c-20&linkCode=df0&hvadid=292982668700&hvpos=&hvnetw=g&hvrand=16302839760748180270&hvpone=&hvptwo=&hvqmt=&hvdev=c&hvdvcmdl=&hvlocint=&hvlocphy=9000899&hvtargid=pla-362913641420&psc=1)
9. [Soldering Kit with Multimeters, Cutters and other tools](https://elmwoodelectronics.ca/products/ladyadas-electronics-toolkit)
10. [Few Resistors](https://elmwoodelectronics.ca/products/10969)

### Software Required:

1. [Latest Debian (Linux) Image for BB-AI](https://beagleboard.org/latest-images)
2. [ThingsSpeak](https://thingspeak.com/)
3. [Eclipse](https://www.eclipse.org/downloads/packages/release/luna/r/eclipse-ide-cc-developers)*
4. [Linaro Compiler](https://www.linaro.org/downloads/)*

<i>* It may be required if your performing cross toolchain that is programming and compiling on host and just transferring the output file to the target</i>

### Programming Language Used: C/C++ along with Python (iff No C/C++ Language Support Avaliable)

<b>This Project was sucessfully demonstrated on December 14, 2020 and completed on December 22, 2020 thus further on no updates will be made to codes unless required </b>

## Project Demonstration (Click on the Image to view the entire working)

<p align="center"><a href="https://www.youtube.com/watch?v=QCfXqrRX3Z0" title="Link Title"><img src="https://i9.ytimg.com/vi/QCfXqrRX3Z0/mq1.jpg?sqp=CKCpqoMG&rs=AOn4CLDy0YCe8qm-4NfvfEFMMs5XsJFzaQ" alt="Alternate Text" width="90%" /></a></p>
