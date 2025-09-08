
undefined8 FUN_001022c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102ba0(param_1);
  uVar2 = FUN_001022b4(param_4);
  uVar3 = FUN_001022a2(param_3);
  uVar4 = FUN_00102290(param_2);
  FUN_00102bcc(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_001041f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_0010299e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001021e4(param_2);
  uVar2 = FUN_00103254(param_1);
  FUN_00103266(uVar2,uVar1);
  return;
}




undefined4 * FUN_00103450(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103018(param_2);
  puVar2 = (undefined4 *)FUN_0010365c(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103ef1(void)

{
  return;
}




void FUN_00102ba0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103254(param_1);
  FUN_001032e9(uVar1,1);
  return;
}




undefined8 FUN_001028f6(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00102a1c(param_1);
  uVar2 = FUN_00103092(param_2);
  uVar1 = FUN_001030a8(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_00102f22(param_1);
  uVar2 = FUN_00103217(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102d10(param_1);
  uVar2 = FUN_00103235(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_00101cec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001020cb(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103f5f(void)

{
  return;
}




void FUN_00101d96(undefined8 *param_1)

{
  FUN_001021e4(*param_1);
  return;
}




long FUN_001030a8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103450(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_001034b4(param_2);
                    /* try { // try from 00103117 to 001031a9 has its CatchHandler @ 001031d5 */
    uVar2 = FUN_001030a8(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_001034ca(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103450(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_001034b4(local_38);
      uVar2 = FUN_001030a8(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_001034ca(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




void FUN_00102058(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001028d8(local_18,param_1);
  FUN_001028f6(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102042(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103f80(void)

{
  return;
}




void FUN_00103f33(void)

{
  return;
}




void FUN_00103f75(void)

{
  return;
}




undefined8 FUN_0010410d(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103a90(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e54(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010382e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001036ff(param_3);
  FUN_0010388a(param_1,param_2,uVar1);
  return;
}




void FUN_00104260(void)

{
  return;
}




void FUN_001020f8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010299e(param_1,param_2);
  FUN_001029e2(param_1,param_2);
  return;
}




void FUN_00101986(undefined8 param_1)

{
  FUN_00101966(param_1);
  return;
}




long FUN_00101881(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_00103f1d(void)

{
  return;
}




void FUN_00102af0(undefined8 param_1)

{
  FUN_001032c2(param_1);
  return;
}




void FUN_00103f6a(void)

{
  return;
}




void FUN_00102d26(undefined8 param_1)

{
  FUN_001026ef(param_1);
  return;
}




long FUN_00101a8a(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101d02(param_1,param_2);
  local_28 = FUN_00101d2c(param_1);
  cVar2 = FUN_00101d4a(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00101d70(param_1);
    uVar3 = FUN_00101d96(&local_38);
    cVar2 = FUN_00101db8(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00101b2a;
    }
  }
  bVar1 = true;
LAB_00101b2a:
  if (bVar1) {
    uVar3 = FUN_00101ddf(param_2);
    FUN_00101e1c(local_30,uVar3);
    FUN_00101e54(&local_28,&local_38);
    local_38 = FUN_00101e76(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101d96(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_001029e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103254(param_1);
  FUN_00103290(uVar1,param_2,1);
  return;
}




void FUN_001019c6(undefined8 param_1,undefined8 param_2)

{
  FUN_00101bb6(param_1,param_2);
  return;
}




void FUN_001018dc(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_00101906(param_1);
  return;
}




ulong FUN_00103dae(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101676(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101986(local_88);
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  local_58[0] = 0;
                    /* try { // try from 00101701 to 0010176a has its CatchHandler @ 001017b6 */
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019c6(local_58,local_88);
                    /* try { // try from 00101772 to 00101776 has its CatchHandler @ 001017a1 */
  FUN_0010394b(local_58);
  FUN_001019a6(local_58);
  FUN_001019a6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103018(long param_1)

{
  FUN_00103432(param_1 + 0x20);
  return;
}




void FUN_00103abb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101fbc(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010284a(param_1,param_2);
  FUN_001028c4(param_1,param_2);
  FUN_001018dc(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001032d4(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103ed0(void)

{
  return;
}




undefined8 FUN_001034ca(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




long FUN_001018ae(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00102f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103387(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103387(param_3);
  param_1[1] = *puVar1;
  return;
}




int FUN_00103eab(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101858(0x30,param_2);
  uVar1 = FUN_001022b4(param_5);
  uVar2 = FUN_001022a2(param_4);
  uVar3 = FUN_00102290(param_3);
  uVar4 = FUN_001021e4(param_2);
  uVar5 = FUN_00103254(param_1);
                    /* try { // try from 00102c5b to 00102c5f has its CatchHandler @ 00102c62 */
  FUN_00103317(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




void FUN_001021e4(long param_1)

{
  FUN_00102af0(param_1 + 0x20);
  return;
}




void FUN_0010289a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010307e(param_1,param_2);
  return;
}




void FUN_001034e0(void)

{
  return;
}




void FUN_001028c4(void)

{
  return;
}




undefined8 FUN_00103254(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a32(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_001026ef(local_38);
    cVar1 = FUN_00101db8(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001020cb(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001020e1(local_38);
    }
  }
  FUN_0010282c(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8
FUN_00101e76(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022b4(param_5);
  uVar2 = FUN_001022a2(param_4);
  uVar3 = FUN_00102290(param_3);
  local_40 = FUN_001022c6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101ef2 to 00101f35 has its CatchHandler @ 00101f73 */
  uVar1 = FUN_001026ef(local_40);
  local_38 = FUN_00102346(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001020f8(param_1,local_40);
    FUN_0010282c(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102742(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00101906(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_0010202c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001022a2(undefined8 param_1)

{
  return param_1;
}




void FUN_001039ba(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010186e(void)

{
  return;
}




undefined8 FUN_001017f3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039ba("Calling good()...");
  FUN_001017e3();
  FUN_001039ba("Finished good()");
  FUN_001039ba("Calling bad()...");
  FUN_00101509();
  FUN_001039ba("Finished bad()");
  return 0;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00102346(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102caa(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00102a1c(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_00102d26(local_50);
    cVar2 = FUN_00101db8(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_00102d26(local_50);
      cVar2 = FUN_00101db8(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102fd8(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102d10(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102d10(local_60);
          local_48[1] = 0;
          FUN_00102d44(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102fac(local_48);
          uVar6 = FUN_00102d26(*puVar5);
          cVar2 = FUN_00101db8(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102d84(local_60,param_3);
          }
          else {
            lVar3 = FUN_001020cb(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_00102d44(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00102f38(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_00102f22(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_00102f22(local_60);
        uVar6 = FUN_00102f22(local_60);
        FUN_00102f38(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102f80(local_48);
        uVar6 = FUN_00102d26(*puVar5);
        cVar2 = FUN_00101db8(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102d84(local_60,param_3);
        }
        else {
          lVar3 = FUN_001020cb(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_00102d44(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00102f38(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001026d4;
  }
  lVar3 = FUN_00102cfa(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_001023e8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102d10(local_60);
    uVar6 = FUN_00102d26(*puVar5);
    cVar2 = FUN_00101db8(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_001023e8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102d10(local_60);
    local_48[1] = 0;
    FUN_00102d44(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102d84(local_60,param_3);
  }
LAB_001026d4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




undefined8 FUN_00103092(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101d4a(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_00103810(undefined8 param_1)

{
  FUN_0010386b(param_1);
  return;
}




void FUN_001041c4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103f3e(void)

{
  return;
}




undefined4 FUN_00101d70(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001021d6(param_1);
  return unaff_EBX;
}




void FUN_00101bb6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00101fbc(param_1,param_2);
  lVar1 = FUN_0010202c(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00102042(param_1);
                    /* try { // try from 00101c11 to 00101c15 has its CatchHandler @ 00101c1b */
    uVar3 = FUN_00102058(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_00103696(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




undefined4 FUN_00101db8(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_001033ea(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103637(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00103387(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102b76(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102206(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00102caa(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282c(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ec5(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_00102206(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010364a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103edb(void)

{
  return;
}




void FUN_001017e3(void)

{
  FUN_00101676();
  return;
}




void FUN_001019a6(undefined8 param_1)

{
  FUN_00101a4c(param_1);
  return;
}




long FUN_00102a1c(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001040ea(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103e9c(void)

{
  return 0;
}




void FUN_00101d02(undefined8 param_1,undefined8 param_2)

{
  FUN_00102136(param_1,param_2);
  return;
}




void FUN_001039e0(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001032e9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010351c(param_1,param_2,0);
  return;
}




void FUN_00103b96(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001020bc(void)

{
  return;
}




void FUN_00101c42(undefined8 param_1)

{
  FUN_001020bc(param_1);
  return;
}




void FUN_001034f4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102136(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102a1c(param_1);
  uVar2 = FUN_00101cec(param_1);
  FUN_00102a32(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001041a5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102b0e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102206(param_2);
  FUN_00102b76(param_1,uVar1);
  return;
}




undefined8
FUN_00102742(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_00102a1c(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_00102d26(param_3);
      uVar5 = FUN_001026ef(param_4);
      cVar1 = FUN_00101db8(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001027c6;
      }
    }
  }
  bVar2 = true;
LAB_001027c6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010282c(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00102290(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032c2(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f28(void)

{
  return;
}




undefined8 * FUN_00102fac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103fc2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103f8b,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_00101df2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102250(param_1,param_2);
  return;
}




void FUN_00101c82(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001020cb(local_28);
    FUN_00101c82(param_1,uVar1);
    lVar2 = FUN_001020e1(local_28);
    FUN_001020f8(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103317(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_001022b4(param_5);
  uVar2 = FUN_001022a2(param_4);
  uVar3 = FUN_00102290(param_3);
  FUN_0010356c(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_0010284a(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103050(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103b3c(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_0010408f(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00101966(undefined8 param_1)

{
  FUN_001019f0(param_1);
  return;
}




undefined8 FUN_00103637(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103050(undefined8 param_1,undefined8 param_2)

{
  FUN_0010289a(param_1,param_2);
  return param_1;
}




void FUN_0010375e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00103810(param_2);
  puVar2 = (undefined4 *)FUN_00102b64(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




undefined8 FUN_00102cfa(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_0010351c(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103696(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




void FUN_00102218(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102206(param_2);
  FUN_00102b0e(param_1,uVar1);
  return;
}




void FUN_001019f0(long param_1)

{
  FUN_00101c42(param_1);
  FUN_00101c62(param_1);
  FUN_001018dc(param_1 + 8);
  return;
}




undefined8 FUN_00101ddf(undefined8 param_1)

{
  return param_1;
}




void FUN_001028d8(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103a12(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010394b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101a8a(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  FUN_00103c17(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103387(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f49(void)

{
  return;
}




void FUN_00103432(undefined8 param_1)

{
  FUN_0010364a(param_1);
  return;
}




void FUN_00104186(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010356c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102290(param_3);
  uVar1 = FUN_001022a2(param_4);
  FUN_00101df2(local_38,uVar1);
  FUN_001022b4(param_5);
  uVar1 = FUN_00101858(0x10,param_2);
                    /* try { // try from 001035f4 to 001035f8 has its CatchHandler @ 001035fb */
  FUN_001036ae(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103f07(void)

{
  return;
}




void FUN_00103c4a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103266(undefined8 param_1,undefined8 param_2)

{
  FUN_001034e0(param_1,param_2);
  return;
}




undefined8 FUN_001020e1(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00103e8d(void)

{
  return 1;
}




void FUN_00101509(void)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101986(local_88);
  puVar1 = (undefined4 *)malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  *puVar1 = 1;
  puVar1[1] = 2;
  local_58[0] = 0;
                    /* try { // try from 00101594 to 001015fd has its CatchHandler @ 00101649 */
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101a8a(local_88,local_58);
  *puVar2 = puVar1;
  FUN_001019c6(local_58,local_88);
                    /* try { // try from 00101605 to 00101609 has its CatchHandler @ 00101634 */
  FUN_001038dc(local_58);
  FUN_001019a6(local_58);
  FUN_001019a6(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00102f22(long param_1)

{
  return param_1 + 0x18;
}




void FUN_001036ae(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_0010375e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ae6(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_0010303a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101a2c(undefined8 param_1)

{
  FUN_00101c72(param_1);
  return;
}




void FUN_00103ee6(void)

{
  return;
}




void FUN_001038dc(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101a8a(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  FUN_00103c17(local_18);
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103be9(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102b46(undefined8 param_1)

{
  FUN_001032d4(param_1);
  return;
}




void FUN_00102250(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b46(param_2);
  uVar1 = FUN_00102b64(uVar1);
  FUN_00102b76(param_1,uVar1);
  return;
}




undefined8 FUN_00101858(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103235(undefined8 param_1)

{
  FUN_001018ae(param_1);
  return;
}




void FUN_00103efc(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




void FUN_00103290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f4(param_1,param_2,param_3);
  return;
}




long FUN_00102d10(long param_1)

{
  return param_1 + 0x20;
}




void FUN_0010307e(void)

{
  return;
}




void FUN_00101a4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cec(param_1);
  FUN_00101c82(param_1,uVar1);
  FUN_00101946(param_1);
  return;
}




undefined8 FUN_00101e1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102206(param_2);
  FUN_00102218(param_1,uVar1);
  return param_1;
}




void FUN_00103f8b(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_001021d6(void)

{
  return;
}




void FUN_00103a3a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103bbe(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_001022b4(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00103caa(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f12(void)

{
  return;
}




void FUN_0010282c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00101c62(void)

{
  return;
}




void FUN_00102fd8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103387(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00103a66(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001037a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101858(0x30,param_2);
  uVar1 = FUN_001036ff(param_3);
  uVar2 = FUN_001021e4(param_2);
  uVar3 = FUN_00103254(param_1);
  FUN_0010382e(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010365c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001036ff(param_2);
  FUN_00103712(uVar1,uVar2);
  return;
}




void FUN_00103f54(void)

{
  return;
}




undefined8 * FUN_00102f80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103712(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ba0(param_1);
  uVar2 = FUN_001036ff(param_2);
  FUN_001037a2(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103217(undefined8 param_1)

{
  FUN_00101881(param_1);
  return;
}




undefined8 FUN_00102d84(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00101cec(param_1);
  local_50 = FUN_00102a1c(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001026ef(local_58);
    local_59 = FUN_00101db8(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001020cb(local_58);
    }
    else {
      local_58 = FUN_001020e1(local_58);
    }
  }
  FUN_0010282c(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_0010339a(param_1);
    cVar1 = FUN_00101d4a(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001033ea(local_38,&local_58,&local_50);
      goto LAB_00102f06;
    }
    FUN_00102f80(&local_48);
  }
  uVar2 = FUN_00102d26(local_48);
  cVar1 = FUN_00101db8(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102fd8(local_38,&local_48,&local_40);
  }
  else {
    FUN_001033ea(local_38,&local_58,&local_50);
  }
LAB_00102f06:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101946(undefined8 param_1)

{
  FUN_00101a2c(param_1);
  return;
}




void FUN_001026ef(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103018(param_1);
  FUN_0010303a(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001034b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00103b11(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001036ff(undefined8 param_1)

{
  return param_1;
}




void FUN_0010388a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001036ff(param_3);
  puVar3 = (undefined8 *)FUN_00101858(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00102186(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c17(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010386b(undefined8 param_1)

{
  FUN_00102b46(param_1);
  return;
}




undefined8 FUN_00102b64(undefined8 param_1)

{
  return param_1;
}




void FUN_00101c72(void)

{
  return;
}




void FUN_00102d44(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00103387(param_3);
  param_1[1] = *puVar1;
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_0010339a(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010282c(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d2c(undefined8 param_1)

{
  FUN_00102186(param_1);
  return;
}



