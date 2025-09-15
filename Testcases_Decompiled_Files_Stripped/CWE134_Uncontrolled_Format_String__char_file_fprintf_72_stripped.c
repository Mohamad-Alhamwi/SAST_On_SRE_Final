
undefined8 FUN_00102910(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_001022d4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001041a8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104171,local_18);
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




void FUN_00102b8d(undefined8 param_1,undefined8 param_2)

{
  FUN_001030d3(param_1,param_2);
  return;
}




void FUN_00103486(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103636(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104073(void)

{
  return 1;
}




void FUN_00102d8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103276(param_2);
  uVar2 = FUN_00103276(param_1);
  FUN_00103288(uVar2,uVar1,param_3);
  return;
}




void FUN_00102b5b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ac(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_001014b0();
    DAT_00108028 = 1;
    return;
  }
  return;
}




void FUN_001020d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001029ee(param_2);
  FUN_0010299d(&local_31,uVar1);
  uVar1 = FUN_00102976(param_2);
                    /* try { // try from 0010213e to 00102142 has its CatchHandler @ 001021ab */
  FUN_00102a00(param_1,uVar1,&local_31);
  FUN_00101eda(&local_31);
  uVar2 = FUN_00102294(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102abe(param_2);
  uVar4 = FUN_00102a66(param_2);
                    /* try { // try from 0010218c to 00102190 has its CatchHandler @ 001021c9 */
  uVar1 = FUN_00102b16(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001040f8(void)

{
  return;
}




undefined8 FUN_00101dd2(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103ba0("Calling good()...");
  FUN_00101dbd();
  FUN_00103ba0("Finished good()");
  FUN_00103ba0("Calling bad()...");
  FUN_00101569();
  FUN_00103ba0("Finished bad()");
  return 0;
}




undefined8 FUN_001031f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101fe4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001022f6(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00101f94(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022d4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104119(void)

{
  return;
}




void FUN_001040cc(void)

{
  return;
}




void FUN_0010410e(void)

{
  return;
}




void FUN_00104150(void)

{
  return;
}




void FUN_00103b31(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b7c(param_1,2);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_00101eae(undefined8 param_1)

{
  FUN_001021f8(param_1);
  FUN_00102218(param_1);
  return;
}




undefined8 FUN_001038ab(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102bda(&local_10);
  return *puVar1;
}




bool FUN_00104275(pthread_t *param_1)

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




void FUN_00102218(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001040b6(void)

{
  return;
}




void FUN_00102c4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030e6(param_1);
  FUN_0010314b(*param_1,uVar1);
  return;
}




void FUN_00104103(void)

{
  return;
}




undefined8 FUN_00102f8f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fbc(param_1,param_2);
  return param_1;
}




void FUN_00102bb8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103d22(undefined4 param_1)

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




undefined8 FUN_001030fc(undefined8 param_1)

{
  return param_1;
}




long FUN_00103b7c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101efa(long *param_1)

{
  FUN_0010225a(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101e4e(param_1);
  return;
}




void FUN_00103351(undefined8 param_1,undefined8 param_2)

{
  FUN_001035a0(param_1,param_2,0);
  return;
}




void FUN_00103e30(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001034f0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001042d0(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103076(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033df(param_1,param_2,param_3);
  return;
}




void FUN_00103dcf(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102ddb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032c6(param_1,param_2,param_3);
  return;
}




void FUN_001022a6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b8d(param_1,param_2);
  return;
}




void FUN_0010438b(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102abe(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102bb8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103506(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001036dd(param_1,param_2,param_3);
  return;
}




void FUN_00102b16(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103076(param_1,param_2,param_3);
  return;
}




void FUN_00103288(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00102bec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_001030fc(param_3);
  uVar2 = FUN_001030e6(param_1);
  FUN_0010310e(*param_1,uVar2,uVar1);
  return;
}




void FUN_0010436c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101eda(undefined8 param_1)

{
  FUN_0010224a(param_1);
  return;
}




void FUN_00101f4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102294(param_1);
  FUN_001022a6(*param_1,param_1[1],uVar1);
  FUN_00101efa(param_1);
  return;
}




void FUN_001023a4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102e10(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001028c4(local_80);
      local_60 = FUN_00102c9e(&local_88,&local_78);
      local_70 = FUN_00102f00(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00102294(local_80);
                    /* try { // try from 001026ae to 00102739 has its CatchHandler @ 001027f1 */
      FUN_00102ddb(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00102294(local_80);
      puVar2 = (undefined8 *)FUN_001022f6(&local_88);
      local_70 = FUN_00102f37(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00102294(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_001022f6(&local_88);
      local_70 = FUN_00102f37(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00102294(local_80);
      FUN_001022a6(*local_80,local_80[1],uVar1);
      FUN_0010225a(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102bec(local_38,param_1,param_4);
                    /* try { // try from 0010242e to 00102601 has its CatchHandler @ 001027d3 */
      local_50 = FUN_00102c80(local_38);
      local_78 = FUN_00101f94(local_80);
      local_48 = FUN_00102c9e(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00102294(local_80);
        FUN_00102ce2(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_001022f6(&local_88);
        FUN_00102d3a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_001022f6(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_001022f6(&local_88);
        FUN_00102d8a(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00102294(local_80);
        lVar4 = FUN_00102ddb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00102294(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_001022f6(&local_88);
        FUN_00102ce2(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_001022f6(&local_88);
        FUN_00102d8a(*puVar2,local_40,local_50);
      }
      FUN_00102c4c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001039f8(undefined8 *param_1)

{
  return *param_1;
}




long FUN_00102976(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_001031c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103486(param_1,param_2,param_3);
  return;
}




void FUN_00101ac2(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e8e(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101b9c to 00101d35 has its CatchHandler @ 00101d8d */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103ba0("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  FUN_001020d8(local_a8,local_c8);
                    /* try { // try from 00101d40 to 00101d44 has its CatchHandler @ 00101d75 */
  FUN_00103b31(local_a8);
  FUN_00101f4c(local_a8);
  FUN_00101f4c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 * FUN_00103860(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00104171(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001040d7(void)

{
  return;
}




undefined8 FUN_001042f3(undefined8 *param_1)

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




void FUN_00101dbd(void)

{
  FUN_00101864();
  FUN_00101ac2();
  return;
}




void FUN_0010372b(undefined8 param_1)

{
  FUN_00103778(param_1);
  return;
}




undefined8 FUN_00101e37(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103454(void)

{
  return;
}




void FUN_00102d3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031f6(param_2);
  uVar2 = FUN_001031f6(param_1);
  FUN_00103208(uVar2,uVar1,param_3);
  return;
}




ulong FUN_00102e10(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_001032fc(param_1);
  lVar2 = FUN_00102976(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102976(local_40);
  local_30 = FUN_00102976(local_40);
  plVar3 = (long *)FUN_00103322(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102976(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_001032fc(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_001032fc(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103dfd(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001022d4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00103667(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




ulong FUN_00103e90(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050cc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102bda(undefined8 param_1)

{
  return param_1;
}




void FUN_00104145(void)

{
  return;
}




void FUN_00103da4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101569(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  char *local_e8;
  undefined8 local_e0;
  size_t local_d8;
  FILE *local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101e8e(local_c8);
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
  local_e8 = local_88;
  local_d8 = strlen(local_e8);
  if (1 < 100 - local_d8) {
                    /* try { // try from 00101643 to 001017dc has its CatchHandler @ 00101834 */
    local_d0 = fopen("/tmp/file.txt","r");
    if (local_d0 != (FILE *)0x0) {
      pcVar1 = fgets(local_e8 + local_d8,100 - (int)local_d8,local_d0);
      if (pcVar1 == (char *)0x0) {
        FUN_00103ba0("fgets() failed");
        local_e8[local_d8] = '\0';
      }
      fclose(local_d0);
    }
  }
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  local_e0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_e0);
  FUN_00102012(local_c8,local_a8[0],1,&local_e8);
  FUN_001020d8(local_a8,local_c8);
                    /* try { // try from 001017e7 to 001017eb has its CatchHandler @ 0010181c */
  FUN_00103aa5(local_a8);
  FUN_00101f4c(local_a8);
  FUN_00101f4c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103a0d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103a42(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010337f(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103468(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c20(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102012(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102308(param_1);
  local_18 = FUN_0010235f(&local_38,&local_20);
  local_20 = FUN_001028c4(local_30);
  uVar1 = FUN_00102910(&local_20,local_18);
  FUN_001023a4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001028c4(local_30);
  FUN_00102910(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ec0)();
  return;
}




undefined8 FUN_00103537(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010372b(param_1);
  puVar1 = (undefined8 *)FUN_00103749(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010224a(void)

{
  return;
}




void FUN_00104166(void)

{
  return;
}




void FUN_00102c80(undefined8 param_1)

{
  FUN_001030e6(param_1);
  return;
}




undefined8 FUN_001029ee(undefined8 param_1)

{
  return param_1;
}




long FUN_0010235f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102bda(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102bda(param_2);
  return lVar1 - *plVar2 >> 3;
}




ulong * FUN_00103322(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_001040c1(void)

{
  return;
}




void FUN_001030d3(void)

{
  return;
}




void FUN_0010412f(void)

{
  return;
}




void FUN_00101e6e(undefined8 param_1)

{
  FUN_00101eae(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_001033cc(void)

{
  return;
}




undefined8 FUN_00102a66(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102bb8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bf8(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010413a(void)

{
  return;
}




void FUN_00103636(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103810(param_1,param_2,param_3);
  return;
}




void FUN_0010314b(undefined8 param_1,undefined8 param_2)

{
  FUN_00103454(param_1,param_2);
  return;
}




void FUN_001037a2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103276(param_3);
  uVar2 = FUN_001038ab(local_28);
  uVar3 = FUN_001038ab(local_20);
  uVar1 = FUN_001038cc(uVar3,uVar2,uVar1);
  FUN_001034f0(&local_30,uVar1);
  return;
}




undefined8 FUN_00102f00(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103351(param_1,param_2);
  }
  return uVar1;
}




void FUN_001035a0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103778(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_001022f6(undefined8 param_1)

{
  return param_1;
}




void FUN_00101e4e(undefined8 param_1)

{
  FUN_00101eda(param_1);
  return;
}




void FUN_00102b4c(void)

{
  return;
}




void * FUN_00103a42(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void * FUN_00103995(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001033df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035e6(param_1,param_2,param_3);
  return;
}




void FUN_001040e2(void)

{
  return;
}




void FUN_00103468(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010415b(void)

{
  return;
}




void FUN_001035e6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103790(param_2);
  uVar2 = FUN_00103790(param_1);
  FUN_001037a2(uVar2,uVar1,param_3);
  return;
}




int FUN_00104091(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103ccc(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001032c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103506(param_1,param_2,param_3);
  return;
}




void FUN_001021f8(undefined8 param_1)

{
  FUN_00102b4c(param_1);
  return;
}




void FUN_00103d7c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010301c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102f00(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




ulong * FUN_00103749(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103ba0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_0010310e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001030fc(param_3);
  FUN_00103410(param_1,param_2,uVar1);
  return;
}




ulong FUN_00103f94(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050d4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103927(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103276(param_3);
  uVar2 = FUN_00103276(local_28);
  uVar3 = FUN_00103276(local_20);
  uVar1 = FUN_00103a0d(uVar3,uVar2,uVar1);
  FUN_001034f0(&local_30,uVar1);
  return;
}




void FUN_00103c76(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00102c9e(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001022f6(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001022f6(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102308(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102bb8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103276(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104082(void)

{
  return 0;
}




void FUN_001032fc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029ee(param_1);
  FUN_00103537(uVar1);
  return;
}




void FUN_00102f37(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010337f(param_2);
  uVar2 = FUN_0010337f(param_1);
  FUN_001031c1(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103175(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103468(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104124(void)

{
  return;
}




void FUN_00101e8e(undefined8 param_1)

{
  FUN_00101e6e(param_1);
  return;
}




undefined8 FUN_00102294(undefined8 param_1)

{
  return param_1;
}




void FUN_00103aa5(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b7c(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_001043aa(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103c4c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001028c4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001022d4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103cf7(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001040ab(void)

{
  return;
}




void FUN_00102a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe6(param_1,param_3);
                    /* try { // try from 00102a3a to 00102a3e has its CatchHandler @ 00102a41 */
  FUN_0010301c(param_1,param_2);
  return;
}




long FUN_001030e6(long param_1)

{
  return param_1 + 8;
}




void FUN_00103aeb(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00103b7c(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_00103810(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103901(param_2);
  uVar2 = FUN_00103901(param_1);
  FUN_00103927(uVar2,uVar1,param_3);
  return;
}




void FUN_001036dd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103276(param_1);
  uVar1 = FUN_00103860(uVar1,param_2,param_3);
  FUN_001034f0(&local_10,uVar1);
  return;
}




void FUN_001040ed(void)

{
  return;
}




void FUN_001030ac(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00103790(undefined8 param_1)

{
  return param_1;
}




void FUN_00103208(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00103276(param_3);
  uVar2 = FUN_00103276(local_28);
  uVar3 = FUN_00103276(local_20);
  uVar1 = FUN_001034bb(uVar3,uVar2,uVar1);
  FUN_001034f0(&local_30,uVar1);
  return;
}




void FUN_00102fe6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fbc(param_1,param_2);
  FUN_00102218(param_1);
  return;
}




undefined8 FUN_0010299d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f8f(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001034bb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103667(param_1,param_2,param_3);
  return;
}




void FUN_00103bc6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103778(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103901(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001039f8(&local_10);
  FUN_001031f6(uVar1);
  return;
}




void FUN_0010225a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102b5b(param_1,param_2,param_3);
  }
  return;
}




void FUN_00104450(void)

{
  return;
}




void FUN_00103ca1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001038cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103995(param_1,param_2,param_3);
  return;
}




void FUN_00102ce2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103175(param_2);
  uVar2 = FUN_00103175(param_1);
  FUN_001031c1(uVar2,uVar1,param_3,param_4);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00102fbc(undefined8 param_1,undefined8 param_2)

{
  FUN_001033cc(param_1,param_2);
  return;
}




void FUN_00103410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_001030fc(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101e37(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_001043e0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101864(void)

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
  FUN_00101e8e(local_c8);
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
  local_d0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_d0);
                    /* try { // try from 00101975 to 00101a3a has its CatchHandler @ 00101a92 */
  FUN_00102012(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_d0);
  FUN_00102012(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_00101f94(local_c8);
  FUN_00101fe4(local_a8,&local_d0);
  FUN_00102012(local_c8,local_a8[0],1,&local_d8);
  FUN_001020d8(local_a8,local_c8);
                    /* try { // try from 00101a45 to 00101a49 has its CatchHandler @ 00101a7a */
  FUN_00103aeb(local_a8);
  FUN_00101f4c(local_a8);
  FUN_00101f4c(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



