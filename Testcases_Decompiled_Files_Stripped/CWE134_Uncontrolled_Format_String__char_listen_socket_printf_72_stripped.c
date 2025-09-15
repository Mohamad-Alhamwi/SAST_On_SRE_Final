
undefined8 FUN_00103d1a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001036de(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010567b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103f97(undefined8 param_1,undefined8 param_2)

{
  FUN_001044dd(param_1,param_2);
  return;
}




void FUN_00104890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a40(param_1,param_2,param_3);
  return;
}




void FUN_001053c5(void)

{
  return;
}




void FUN_00104194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104680(param_2);
  uVar2 = FUN_00104680(param_1);
  FUN_00104692(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f65(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001044b6(param_1,param_2,param_3);
  return;
}




long FUN_001026b8(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001034e2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103df8(param_2);
  FUN_00103da7(&local_31,uVar1);
  uVar1 = FUN_00103d80(param_2);
                    /* try { // try from 00103548 to 0010354c has its CatchHandler @ 001035b5 */
  FUN_00103e0a(param_1,uVar1,&local_31);
  FUN_001032e4(&local_31);
  uVar2 = FUN_0010369e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103ec8(param_2);
  uVar4 = FUN_00103e70(param_2);
                    /* try { // try from 00103596 to 0010359a has its CatchHandler @ 001035d3 */
  uVar1 = FUN_00103f20(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105433(void)

{
  return;
}




undefined8 FUN_00104600(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001031dd(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104eaf("Calling good()...");
  FUN_001031c8();
  FUN_00104eaf("Finished good()");
  FUN_00104eaf("Calling bad()...");
  FUN_001026dc();
  FUN_00104eaf("Finished bad()");
  return 0;
}




void FUN_001033ee(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103700(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_0010339e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036de(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105454(void)

{
  return;
}




void FUN_00105407(void)

{
  return;
}




void FUN_00105449(void)

{
  return;
}




undefined8 FUN_001054b7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105480,local_18);
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




void FUN_00104f07(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001032b8(undefined8 param_1)

{
  FUN_00103602(param_1);
  FUN_00103622(param_1);
  return;
}




undefined8 FUN_00104cb5(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103fe4(&local_10);
  return *puVar1;
}




void FUN_0010569a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103622(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001053f1(void)

{
  return;
}




void FUN_00104056(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001044f0(param_1);
  FUN_00104555(*param_1,uVar1);
  return;
}




void FUN_0010543e(void)

{
  return;
}




undefined8 FUN_00104399(undefined8 param_1,undefined8 param_2)

{
  FUN_001043c6(param_1,param_2);
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00103fc2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010510c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00104506(undefined8 param_1)

{
  return param_1;
}




void FUN_00104f2f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103304(long *param_1)

{
  FUN_00103664(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00103258(param_1);
  return;
}




void FUN_0010475b(undefined8 param_1,undefined8 param_2)

{
  FUN_001049aa(param_1,param_2,0);
  return;
}




undefined8 FUN_00105391(void)

{
  return 0;
}




undefined8 FUN_001048fa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001056b9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001047e9(param_1,param_2,param_3);
  return;
}




ulong FUN_001052a3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001041e5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046d0(param_1,param_2,param_3);
  return;
}




void FUN_001036b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103f97(param_1,param_2);
  return;
}




undefined8 FUN_00103ec8(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103fc2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104ae7(param_1,param_2,param_3);
  return;
}




void FUN_00103f20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104480(param_1,param_2,param_3);
  return;
}




void FUN_00104692(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103ff6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104506(param_3);
  uVar2 = FUN_001044f0(param_1);
  FUN_00104518(*param_1,uVar2,uVar1);
  return;
}




void FUN_00105760(void)

{
  return;
}




void FUN_001032e4(undefined8 param_1)

{
  FUN_00103654(param_1);
  return;
}




void FUN_00103356(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010369e(param_1);
  FUN_001036b0(*param_1,param_1[1],uVar1);
  FUN_00103304(param_1);
  return;
}




void FUN_001037ae(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_0010421a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103cce(local_80);
      local_60 = FUN_001040a8(&local_88,&local_78);
      local_70 = FUN_0010430a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_0010369e(local_80);
                    /* try { // try from 00103ab8 to 00103b43 has its CatchHandler @ 00103bfb */
      FUN_001041e5(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_0010369e(local_80);
      puVar2 = (undefined8 *)FUN_00103700(&local_88);
      local_70 = FUN_00104341(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_0010369e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00103700(&local_88);
      local_70 = FUN_00104341(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_0010369e(local_80);
      FUN_001036b0(*local_80,local_80[1],uVar1);
      FUN_00103664(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00103ff6(local_38,param_1,param_4);
                    /* try { // try from 00103838 to 00103a0b has its CatchHandler @ 00103bdd */
      local_50 = FUN_0010408a(local_38);
      local_78 = FUN_0010339e(local_80);
      local_48 = FUN_001040a8(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_0010369e(local_80);
        FUN_001040ec(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00103700(&local_88);
        FUN_00104144(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00103700(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00103700(&local_88);
        FUN_00104194(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_0010369e(local_80);
        lVar4 = FUN_001041e5(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_0010369e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00103700(&local_88);
        FUN_001040ec(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00103700(&local_88);
        FUN_00104194(*puVar2,local_40,local_50);
      }
      FUN_00104056(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104e02(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00103d80(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001045cb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104890(param_1,param_2,param_3);
  return;
}




void FUN_00102d81(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103298(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102f0b to 00103140 has its CatchHandler @ 00103198 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  FUN_001034e2(local_b8,local_d8);
                    /* try { // try from 0010314b to 0010314f has its CatchHandler @ 00103180 */
  FUN_00102681(local_b8);
  FUN_00103356(local_b8);
  FUN_00103356(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00104c6a(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




undefined8 FUN_00105602(undefined8 *param_1)

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




void FUN_00105412(void)

{
  return;
}




void FUN_001056f0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001031c8(void)

{
  FUN_00102b23();
  FUN_00102d81();
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_00104b35(undefined8 param_1)

{
  FUN_00104b82(param_1);
  return;
}




undefined8 FUN_00103242(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010485e(void)

{
  return;
}




void FUN_00104144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104600(param_2);
  uVar2 = FUN_00104600(param_1);
  FUN_00104612(uVar2,uVar1,param_3);
  return;
}




ulong FUN_0010421a(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00104706(param_1);
  lVar2 = FUN_00103d80(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103d80(local_40);
  local_30 = FUN_00103d80(local_40);
  plVar3 = (long *)FUN_0010472c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103d80(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104706(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104706(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00105382(void)

{
  return 1;
}




void FUN_001036de(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00104a71(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




int FUN_001053a0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103fe4(undefined8 param_1)

{
  return param_1;
}




void FUN_00105480(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




ulong FUN_0010519f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026dc(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_104;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103298(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_104 = -1;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data[2] = '\0';
    local_98.sa_data[3] = '\0';
    local_98.sa_data[4] = '\0';
    local_98.sa_data[5] = '\0';
    local_98.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_98,0x10);
                    /* try { // try from 00102866 to 00102a9b has its CatchHandler @ 00102af3 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_104 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_104 != -1)) {
      sVar2 = recv(local_104,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_104 != -1) {
    close(local_104);
  }
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_0010339e(local_d8);
  FUN_001033ee(local_b8,&local_f0);
  FUN_0010341c(local_d8,local_b8[0],1,&local_f8);
  FUN_001034e2(local_b8,local_d8);
                    /* try { // try from 00102aa6 to 00102aaa has its CatchHandler @ 00102adb */
  FUN_00102609(local_b8);
  FUN_00103356(local_b8);
  FUN_00103356(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104e17(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104e4c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104789(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104872(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104fdb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00103712(param_1);
  local_18 = FUN_00103769(&local_38,&local_20);
  local_20 = FUN_00103cce(local_30);
  uVar1 = FUN_00103d1a(&local_20,local_18);
  FUN_001037ae(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103cce(local_30);
  FUN_00103d1a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00104941(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104b35(param_1);
  puVar1 = (undefined8 *)FUN_00104b53(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103654(void)

{
  return;
}




undefined8 FUN_001055df(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010408a(undefined8 param_1)

{
  FUN_001044f0(param_1);
  return;
}




undefined8 FUN_00103df8(undefined8 param_1)

{
  return param_1;
}




long FUN_00103769(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103fe4(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103fe4(param_2);
  return lVar1 - *plVar2 >> 3;
}




ulong * FUN_0010472c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001053fc(void)

{
  return;
}




void FUN_001044dd(void)

{
  return;
}




void FUN_0010546a(void)

{
  return;
}




void FUN_00103278(undefined8 param_1)

{
  FUN_001032b8(param_1);
  return;
}




void FUN_00102681(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001026b8(param_1,2);
  puts((char *)*puVar1);
  return;
}




void FUN_001047d6(void)

{
  return;
}




undefined8 FUN_00103e70(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103fc2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104fb0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00105475(void)

{
  return;
}




void FUN_00104a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c1a(param_1,param_2,param_3);
  return;
}




void FUN_00104555(undefined8 param_1,undefined8 param_2)

{
  FUN_0010485e(param_1,param_2);
  return;
}




void FUN_00104bac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104680(param_3);
  uVar2 = FUN_00104cb5(local_28);
  uVar3 = FUN_00104cb5(local_20);
  uVar1 = FUN_00104cd6(uVar3,uVar2,uVar1);
  FUN_001048fa(&local_30,uVar1);
  return;
}




undefined8 FUN_0010430a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0010475b(param_1,param_2);
  }
  return uVar1;
}




void FUN_001049aa(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104b82(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103700(undefined8 param_1)

{
  return param_1;
}




void FUN_00103258(undefined8 param_1)

{
  FUN_001032e4(param_1);
  return;
}




void FUN_00103f56(void)

{
  return;
}




void * FUN_00104e4c(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void * FUN_00104d9f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001047e9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001049f0(param_1,param_2,param_3);
  return;
}




void FUN_0010541d(void)

{
  return;
}




void FUN_00104872(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




bool FUN_00105584(pthread_t *param_1)

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




void FUN_001049f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104b9a(param_2);
  uVar2 = FUN_00104b9a(param_1);
  FUN_00104bac(uVar2,uVar1,param_3);
  return;
}




void FUN_001053db(void)

{
  return;
}




void FUN_001050b3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001046d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104910(param_1,param_2,param_3);
  return;
}




void FUN_00103602(undefined8 param_1)

{
  FUN_00103f56(param_1);
  return;
}




void FUN_0010513f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00104426(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010430a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_00104b53(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00104f5b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104506(param_3);
  FUN_0010481a(param_1,param_2,uVar1);
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




void FUN_001053ba(void)

{
  return;
}




void FUN_00104d31(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104680(param_3);
  uVar2 = FUN_00104680(local_28);
  uVar3 = FUN_00104680(local_20);
  uVar1 = FUN_00104e17(uVar3,uVar2,uVar1);
  FUN_001048fa(&local_30,uVar1);
  return;
}




void FUN_00105031(undefined4 param_1)

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




long FUN_001040a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103700(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103700(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00103712(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103fc2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00104680(undefined8 param_1)

{
  return param_1;
}




void FUN_001053d0(void)

{
  return;
}




void FUN_00104706(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103df8(param_1);
  FUN_00104941(uVar1);
  return;
}




void FUN_00104341(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104789(param_2);
  uVar2 = FUN_00104789(param_1);
  FUN_001045cb(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_0010457f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104872(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010545f(void)

{
  return;
}




void FUN_00103298(undefined8 param_1)

{
  FUN_00103278(param_1);
  return;
}




undefined8 FUN_0010369e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104eaf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00105006(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103cce(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036de(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001050de(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001053e6(void)

{
  return;
}




void FUN_00103e0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001043f0(param_1,param_3);
                    /* try { // try from 00103e44 to 00103e48 has its CatchHandler @ 00103e4b */
  FUN_00104426(param_1,param_2);
  return;
}




void FUN_00102609(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001026b8(param_1,2);
  printf((char *)*puVar1);
  return;
}




long FUN_001044f0(long param_1)

{
  return param_1 + 8;
}




void FUN_00104ed5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00104c1a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104d0b(param_2);
  uVar2 = FUN_00104d0b(param_1);
  FUN_00104d31(uVar2,uVar1,param_3);
  return;
}




void FUN_00104ae7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104680(param_1);
  uVar1 = FUN_00104c6a(uVar1,param_2,param_3);
  FUN_001048fa(&local_10,uVar1);
  return;
}




void FUN_00105428(void)

{
  return;
}




void FUN_001044b6(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00104b9a(undefined8 param_1)

{
  return param_1;
}




void FUN_00104612(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00104680(param_3);
  uVar2 = FUN_00104680(local_28);
  uVar3 = FUN_00104680(local_20);
  uVar1 = FUN_001048c5(uVar3,uVar2,uVar1);
  FUN_001048fa(&local_30,uVar1);
  return;
}




void FUN_001043f0(undefined8 param_1,undefined8 param_2)

{
  FUN_001043c6(param_1,param_2);
  FUN_00103622(param_1);
  return;
}




undefined8 FUN_00103da7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104399(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001048c5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a71(param_1,param_2,param_3);
  return;
}




void FUN_00104f85(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00104b82(void)

{
  return 0xfffffffffffffff;
}




void FUN_00104d0b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104e02(&local_10);
  FUN_00104600(uVar1);
  return;
}




void FUN_00103664(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103f65(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010508b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00104cd6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104d9f(param_1,param_2,param_3);
  return;
}




void FUN_001040ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010457f(param_2);
  uVar2 = FUN_0010457f(param_1);
  FUN_001045cb(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102645(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001026b8(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_001043c6(undefined8 param_1,undefined8 param_2)

{
  FUN_001047d6(param_1,param_2);
  return;
}




void FUN_0010481a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00104506(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00103242(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102b23(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103298(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_0010339e(local_c8);
  FUN_001033ee(local_a8,&local_d0);
                    /* try { // try from 00102c34 to 00102cf9 has its CatchHandler @ 00102d51 */
  FUN_0010341c(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010339e(local_c8);
  FUN_001033ee(local_a8,&local_d0);
  FUN_0010341c(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_0010339e(local_c8);
  FUN_001033ee(local_a8,&local_d0);
  FUN_0010341c(local_c8,local_a8[0],1,&local_d8);
  FUN_001034e2(local_a8,local_c8);
                    /* try { // try from 00102d04 to 00102d08 has its CatchHandler @ 00102d39 */
  FUN_00102645(local_a8);
  FUN_00103356(local_a8);
  FUN_00103356(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



