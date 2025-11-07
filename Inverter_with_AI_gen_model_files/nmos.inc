** PTM-MG 5nm HSPICE Model Card for HP NFET 
** Nominal VDD=0.65V (scaled from 0.7V)

.model nfet nmos level = 72 
+ bulkmod = 1 
+lmin    = 7e-009          lmax    = 2.1e-008        
************************************************************
*                         general                          *
************************************************************
*========================= flags ==========================*
+version = 105.03          bulkmod = 1               igcmod  = 1               igbmod  = 1             
+gidlmod = 0               iimod   = 0               geomod  = 1               rdsmod  = 1             
+rgatemod= 0               rgeomod = 1               shmod   = 0               nqsmod  = 0             
+coremod = 0               cgeomod = 2               capmod  = 0               tnom    = 300.15        
*======================== process =========================*
+eot     = 4.8e-010        eotbox  = 1e-007          tfin    = 5e-009          toxp    = 9e-010        
+nbody   = 1.2e+022        phig    = 4.4243          epsrox  = 3.9             epsrsub = 11.9          
+easub   = 4.05            ni0sub  = 1.1e+016        bg0sub  = 1.12            nc0sub  = 2.86e+025     
+nsd     = 3.5e+026        ngate   = 0               nfin    = 1               d       = 3e-008        
+nseg    = 5               l       = 8e-009        
*========================== w/l ===========================*
+xl      = 0               lint    = 1.5e-010        ll      = 0               lln     = 1             
+llc     = 0               dlc     = 0               dlbin   = 0               hfin    = 1.4e-008      
+fech    = 1               deltaw  = 0               deltawcv= 0               fechcv  = 1             
+hepi    = 6e-009        
*======================== geometry ========================*
+tsili   = 5.5e-009        rhoc    = 3e-13           cratio  = 0.5             deltaprsd= 0             
+sdterm  = 0               ldg     = 1.5e-009        epsrsp  = 3.9             tgate   = 6e-009        
+tmask   = 0               asiliend= 0               arsdend = 0               prsdend = 0             
+nsde    = 1e+026          rgeoa   = 1               rgeob   = 0               rgeoc   = 0             
+rgeod   = 0               rgeoe   = 0               cgeoa   = 1               cgeob   = 0             
+cgeoc   = 0               cgeod   = 0               cgeoe   = 1             
*===================== model_selector =====================*
************************************************************
*                            dc                            *
************************************************************
+cit     = 1.5e-005      
*========================== vth ===========================*
+cdsc    = 0.042           cdscd   = 0.008           dvt0    = 0.012           dvt1    = 0.72          
+phin    = 0.05            eta0    = 0.72            dsub    = 0.95            k1rsce  = 0             
+lpe0    = 4e-009          dvtshift= 0               qmfactor= 0               qmtceniv= 0             
+qmtcencv= 0               etaqm   = 0.54            qm0     = 0.001143        pqm     = 0.66          
+qm0acc  = 0.001           pqmacc  = 0.66            delvfbacc= 0              u0      = 0.058         
*======================== mobility ========================*
+etamob  = 2               up      = 0               lpa     = 1               ua      = 0.35          
+aua     = 0               bua     = 1.2e-007        eu      = 1.8             ud      = 0             
+aud     = 0               bud     = 6e-008          ucs     = 0               rdswmin = 0             
*======================= resistance =======================*
+rdsw    = 120             ardsw   = 0               brdsw   = 1.2e-007        prwg    = 0             
+wr      = 1               rswmin  = 0               rsw     = 0               arsw    = 0             
+brsw    = 1.2e-007        rdwmin  = 0               rdw     = 0               ardw    = 0             
+brdw    = 1.2e-007        rgfin   = 0.0012          rgext   = 0               rshs    = 0             
+vsat    = 170000        
*======================= saturation =======================*
+deltavsat= 1               ksativ  = 0.85            avsat   = 0               avsat1  = 0             
+bvsat   = 1.2e-007        bvsat1  = 1.2e-007        mexp    = 3               amexp   = 0             
+bmexp   = 1               ptwg    = 0               aptwg   = 0               bptwg   = 1.2e-007      
*========================== rout ==========================*
+pclm    = 0.18            pclmcv  = 0.012           apclm   = 0               bpclm   = 1.2e-007      
+pclmg   = 0               pclmgcv = 0               vasat   = 0.65            vasatcv = 0.22          
+pdibl1  = 1.4             pdibl2  = 0.00025         drout   = 1.08            pvag    = 1             
+fpitch  = 1.7e-008      
*====================== self-heating ======================*
+rth0    = 0.012           cth0    = 1.2e-005        wth0    = 0             
************************************************************
*                         leakage                          *
************************************************************
+aigbinv = 0.0125        
*========================== igb ===========================*
+bigbinv = 0.035           cigbinv = 0.007           eigbinv = 1.15            nigbinv = 1.2             
+aigbacc = 0.0165          bigbacc = 0.00105         cigbacc = 0.08            nigbacc = 3             
+aigc    = 0.0148        
*========================== igc ===========================*
+bigc    = 0.00185         cigc    = 0.08            nigc    = 1             
*======================== igs/igd =========================*
+dlcigs  = 0               dlcigd  = 0               aigs    = 0.0148          aigd    = 0.0148        
+bigs    = 0.00185         bigd    = 0.00185         cigs    = 0.08            cigd    = 0.08          
+poxedge = 1               agidl   = 6.5e-012      
*======================= gidl/gisl ========================*
+agisl   = 6.5e-012        bgidl   = 3.2e+008        bgisl   = 3.2e+008        egidl   = 0.11          
+egisl   = 0.11            alpha0  = 0             
*========================== isub ==========================*
+alpha1  = 0               alphaii = 0               betaii0 = 0               betaii1 = 0             
+betaii2 = 0.1             esatii  = 10000000        lii     = 4e-010          sii0    = 0.5           
+sii1    = 0.1             sii2    = 0               siid    = 0               beta0   = 30            
+lintigen= 0             
*================ generation/recombination ================*
+ntgen   = 1               aigen   = 0               bigen   = 0             
************************************************************
*                            rf                            *
************************************************************
+xrcrg1  = 12            
*==================== nonquasi-static =====================*
+xrcrg2  = 1             
************************************************************
*                         junction                         *
************************************************************
*======================== current =========================*
+jss     = 0.00012         jsd     = 0.00012         jsws    = 0               jswgs   = 0             
+njs     = 1               njd     = 1               ijthsfwd= 0.1             ijthdfwd= 0.1           
+ijthsrev= 0.1             ijthdrev= 0.1             bvs     = 10              bvd     = 10            
+xjbvs   = 1               xjbvd   = 1               cjs     = 0.00055       
*====================== capacitance =======================*
+cjd     = 0.00055         cjsws   = 5.5e-010        cjswgs  = 0               pbs     = 1             
+pbd     = 1               pbsws   = 1               mjs     = 0.5             mjd     = 0.5           
+mjsws2  = 0.33            mjswd2  = 0.33            mjsws   = 0.33            sjs     = 0             
+sjsws   = 0               sjswgs  = 0               mjs2    = 0.125           mjd2    = 0.125         
************************************************************
*                       capacitance                        *
************************************************************
*====================== capacitance =======================*
+cgsp    = 0               cgdp    = 0               cdsp    = 0               cfs     = 2.8e-011      
+cfd     = 2.9e-011        covs    = 2.7e-011        covd    = 2.7e-011        cgsl    = 0             
+ckappas = 0.6             cgbo    = 0               cgbl    = 0             
************************************************************
*                       temperature                        *
************************************************************
+tbgasub = 0.000702      
*======================== process =========================*
+tbgbsub = 1108            kt1     = 0             
*========================== vth ===========================*
+kt1l    = 0               ute     = 0             
*======================== mobility ========================*
+utl     = -0.0018         ua1     = 0.00115         ud1     = 0               ucste   = -0.0052       
+at      = -0.0018       
*========================== vsat ==========================*
+ptwgt   = 0.0045          tmexp   = 0               prt     = 0.0011        
*======================== resistor ========================*
+iit     = -0.5          
*========================== isub ==========================*
+tii     = 0               tgidl   = -0.00035      
*========================== gidl ==========================*
+igt     = 2.5           
*====================== gatecurrent =======================*
*======================== junction ========================*
+tcj     = 0               tcjsw   = 0               tcjswg  = 0               tpb     = 0             
+tpbsw   = 0               tpbswg  = 0               xtis    = 3               xtid    = 3             
+xtss    = 0.02            xtssws  = 0.02            xtsswgs = 0.02            tnjts   = 0             
+tnjtssw = 0               tnjtsswg= 0             
************************************************************
*                          noise                           *
************************************************************
+ef      = 1             
*========================== 1/f ===========================*
+lintnoi = 0               em      = 45000000        noia    = 7e+039          noib    = 3.5e+024      
+noic    = 95000000        ntnoi   = 1