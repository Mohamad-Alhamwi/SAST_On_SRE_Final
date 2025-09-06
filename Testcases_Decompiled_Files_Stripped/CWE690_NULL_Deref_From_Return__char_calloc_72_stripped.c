
void FUN_00103643(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103820(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103ae4(void)

{
  return;
}




void FUN_001037f2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102f72(void)

{
  return;
}




void FUN_001019f8(undefined8 param_1)

{
  FUN_00101d68(param_1);
  return;
}




void FUN_0010332e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010341f(param_2);
  uVar2 = FUN_0010341f(param_1);
  FUN_00103445(uVar2,uVar1,param_3);
  return;
}




void FUN_00103024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031fb(param_1,param_2,param_3);
  return;
}




bool FUN_00103c98(pthread_t *param_1)

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




void FUN_00101a18(long *param_1)

{
  FUN_00101d78(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_0010196c(param_1);
  return;
}




void FUN_00102679(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bca(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001026f8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001032ae(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102584(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026d6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001028a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d94(param_2);
  uVar2 = FUN_00102d94(param_1);
  FUN_00102da6(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00103296(void)

{
  return 0xfffffffffffffff;
}




long FUN_00103185(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001019ac(undefined8 param_1)

{
  FUN_0010198c(param_1);
  return;
}




undefined8 FUN_001033c9(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026f8(&local_10);
  return *puVar1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00103a96(void)

{
  return 1;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015ac(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 0x696c616974696e49;
  *(undefined2 *)(puVar1 + 1) = 0x657a;
  *(undefined *)((long)puVar1 + 10) = 0;
  FUN_001035c3(puVar1);
  free(puVar1);
  return;
}




void FUN_00101547(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_001015ac(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0x696c616974696e49;
    *(undefined2 *)(puVar1 + 1) = 0x657a;
    *(undefined *)((long)puVar1 + 10) = 0;
    FUN_001035c3(puVar1);
    free(puVar1);
  }
  return;
}




void FUN_00103b1b(void)

{
  return;
}




ulong * FUN_00102e40(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00102a1e(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e6f(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103853(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




long FUN_00101e7d(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026f8(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026f8(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_00102d94(undefined8 param_1)

{
  return param_1;
}




void FUN_00102cdf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fa4(param_1,param_2,param_3);
  return;
}




void FUN_00102800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c93(param_2);
  uVar2 = FUN_00102c93(param_1);
  FUN_00102cdf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b73(void)

{
  return;
}




void FUN_00103249(undefined8 param_1)

{
  FUN_00103296(param_1);
  return;
}




void FUN_00103e70(void)

{
  return;
}




undefined8 FUN_00102aad(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ada(param_1,param_2);
  return param_1;
}




void FUN_00103b47(void)

{
  return;
}




void FUN_00103aef(void)

{
  return;
}




void * FUN_001034b3(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103745(undefined4 param_1)

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




void FUN_0010379f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103d8f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




ulong FUN_001039b7(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001031fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d94(param_1);
  uVar1 = FUN_0010337e(uVar1,param_2,param_3);
  FUN_0010300e(&local_10,uVar1);
  return;
}




ulong * FUN_00103267(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010279e(undefined8 param_1)

{
  FUN_00102c04(param_1);
  return;
}




undefined8 FUN_001018f0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035c3("Calling good()...");
  FUN_001018e0();
  FUN_001035c3("Finished good()");
  FUN_001035c3("Calling bad()...");
  FUN_001015d0();
  FUN_001035c3("Finished bad()");
  return 0;
}




void FUN_001035e9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101d36(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00102d26(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d94(param_3);
  uVar2 = FUN_00102d94(local_28);
  uVar3 = FUN_00102d94(local_20);
  uVar1 = FUN_00102fd9(uVar3,uVar2,uVar1);
  FUN_0010300e(&local_30,uVar1);
  return;
}




long FUN_00102494(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_0010366f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00103bcb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b94,local_18);
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




void FUN_00102fd9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103185(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010300e(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102e6f(undefined8 param_1,undefined8 param_2)

{
  FUN_001030be(param_1,param_2,0);
  return;
}




undefined8 FUN_00103055(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00103249(param_1);
  puVar1 = (undefined8 *)FUN_00103267(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103ad9(void)

{
  return;
}




void FUN_00101ec2(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010292e(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023e2(local_80);
      local_60 = FUN_001027bc(&local_88,&local_78);
      local_70 = FUN_00102a1e(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101db2(local_80);
                    /* try { // try from 001021cc to 00102257 has its CatchHandler @ 0010230f */
      FUN_001028f9(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101db2(local_80);
      puVar2 = (undefined8 *)FUN_00101e14(&local_88);
      local_70 = FUN_00102a55(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101db2(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101e14(&local_88);
      local_70 = FUN_00102a55(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101db2(local_80);
      FUN_00101dc4(*local_80,local_80[1],uVar1);
      FUN_00101d78(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010270a(local_38,param_1,param_4);
                    /* try { // try from 00101f4c to 0010211f has its CatchHandler @ 001022f1 */
      local_50 = FUN_0010279e(local_38);
      local_78 = FUN_00101ab2(local_80);
      local_48 = FUN_001027bc(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101db2(local_80);
        FUN_00102800(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101e14(&local_88);
        FUN_00102858(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101e14(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101e14(&local_88);
        FUN_001028a8(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101db2(local_80);
        lVar4 = FUN_001028f9(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101db2(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101e14(&local_88);
        FUN_00102800(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101e14(&local_88);
        FUN_001028a8(*puVar2,local_40,local_50);
      }
      FUN_0010276a(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103afa(void)

{
  return;
}




undefined8 FUN_00102c1a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00103516(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101758(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019ac(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(0x14,1);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
                    /* try { // try from 001017d5 to 0010186a has its CatchHandler @ 001018b6 */
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  FUN_00101bf6(local_38,local_58);
                    /* try { // try from 00101872 to 00101876 has its CatchHandler @ 001018a1 */
  FUN_00101547(local_38);
  FUN_00101a6a(local_38);
  FUN_00101a6a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102d14(undefined8 param_1)

{
  return param_1;
}




void FUN_001015d0(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001019ac(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(0x14,1);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
                    /* try { // try from 0010164d to 001016e2 has its CatchHandler @ 0010172e */
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101ab2(local_58);
  FUN_00101b02(local_38,&local_60);
  FUN_00101b30(local_58,local_38[0],1,&local_68);
  FUN_00101bf6(local_38,local_58);
                    /* try { // try from 001016ea to 001016ee has its CatchHandler @ 00101719 */
  FUN_001014e9(local_38);
  FUN_00101a6a(local_38);
  FUN_00101a6a(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001038b3(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f86(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001032c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d94(param_3);
  uVar2 = FUN_001033c9(local_28);
  uVar3 = FUN_001033c9(local_20);
  uVar1 = FUN_001033ea(uVar3,uVar2,uVar1);
  FUN_0010300e(&local_30,uVar1);
  return;
}




undefined8 FUN_00102e9d(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f86(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101d68(void)

{
  return;
}




void FUN_0010251e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b04(param_1,param_3);
                    /* try { // try from 00102558 to 0010255c has its CatchHandler @ 0010255f */
  FUN_00102b3a(param_1,param_2);
  return;
}




void FUN_001033ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034b3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103aa5(void)

{
  return 0;
}




void FUN_001036c4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001035c3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103e00(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101d16(undefined8 param_1)

{
  FUN_0010266a(param_1);
  return;
}




undefined8 FUN_00101e14(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a6a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101db2(param_1);
  FUN_00101dc4(*param_1,param_1[1],uVar1);
  FUN_00101a18(param_1);
  return;
}




void FUN_00103b5d(void)

{
  return;
}




undefined8 FUN_0010250c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032ae(param_2);
  uVar2 = FUN_001032ae(param_1);
  FUN_001032c0(uVar2,uVar1,param_3);
  return;
}




ulong FUN_0010292e(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102e1a(param_1);
  lVar2 = FUN_00102494(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102494(local_40);
  local_30 = FUN_00102494(local_40);
  plVar3 = (long *)FUN_00102e40(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102494(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e1a(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e1a(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101bf6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010250c(param_2);
  FUN_001024bb(&local_31,uVar1);
  uVar1 = FUN_00102494(param_2);
                    /* try { // try from 00101c5c to 00101c60 has its CatchHandler @ 00101cc9 */
  FUN_0010251e(param_1,uVar1,&local_31);
  FUN_001019f8(&local_31);
  uVar2 = FUN_00101db2(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025dc(param_2);
  uVar4 = FUN_00102584(param_2);
                    /* try { // try from 00101caa to 00101cae has its CatchHandler @ 00101ce7 */
  uVar1 = FUN_00102634(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c1a(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101955(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010371a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101df2(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001018e0(void)

{
  FUN_00101758();
  return;
}




undefined8 FUN_001025dc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026d6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b89(void)

{
  return;
}




void FUN_00103b05(void)

{
  return;
}




void FUN_0010352b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103560(param_1,param_2,param_3);
  return;
}




void FUN_0010196c(undefined8 param_1)

{
  FUN_001019f8(param_1);
  return;
}




void FUN_00102da6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001030be(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103296(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_001037c7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_0010242e(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101df2(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b04(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ada(param_1,param_2);
  FUN_00101d36(param_1);
  return;
}




undefined8 FUN_00101955(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102ada(undefined8 param_1,undefined8 param_2)

{
  FUN_00102eea(param_1,param_2);
  return;
}




void FUN_00101b30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e26(param_1);
  local_18 = FUN_00101e7d(&local_38,&local_20);
  local_20 = FUN_001023e2(local_30);
  uVar1 = FUN_0010242e(&local_20,local_18);
  FUN_00101ec2(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023e2(local_30);
  FUN_0010242e(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103dae(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101d78(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102679(param_1,param_2,param_3);
  }
  return;
}




undefined8 * FUN_0010337e(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00102c93(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f86(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b3c(void)

{
  return;
}




void FUN_00103b7e(void)

{
  return;
}




void FUN_00102bca(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102de4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103024(param_1,param_2,param_3);
  return;
}




int FUN_00103ab4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void * FUN_00103560(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103d16(undefined8 *param_1)

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




void FUN_00102bf1(void)

{
  return;
}




void FUN_00103dcd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00103b10(void)

{
  return;
}




void FUN_00101b02(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101e14(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102e1a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010250c(param_1);
  FUN_00103055(uVar1);
  return;
}




void FUN_00103154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010332e(param_1,param_2,param_3);
  return;
}




void FUN_00103b94(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101ab2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101df2(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c69(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f72(param_1,param_2);
  return;
}




void FUN_00103445(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d94(param_3);
  uVar2 = FUN_00102d94(local_28);
  uVar3 = FUN_00102d94(local_20);
  uVar1 = FUN_0010352b(uVar3,uVar2,uVar1);
  FUN_0010300e(&local_30,uVar1);
  return;
}




void FUN_0010361b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




long FUN_00102c04(long param_1)

{
  return param_1 + 8;
}




void FUN_001036ef(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101e26(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026d6(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024bb(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102aad(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_0010198c(undefined8 param_1)

{
  FUN_001019cc(param_1);
  return;
}




void FUN_00102eea(void)

{
  return;
}




void FUN_00103b68(void)

{
  return;
}




undefined8 FUN_00101db2(undefined8 param_1)

{
  return param_1;
}




void FUN_001019cc(undefined8 param_1)

{
  FUN_00101d16(param_1);
  FUN_00101d36(param_1);
  return;
}




undefined8 FUN_001023e2(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101df2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102efd(param_1,param_2,param_3);
  return;
}




void FUN_00103b52(void)

{
  return;
}




undefined8 FUN_00103cf3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001028f9(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102de4(param_1,param_2,param_3);
  return;
}




void FUN_00102a55(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e9d(param_2);
  uVar2 = FUN_00102e9d(param_1);
  FUN_00102cdf(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102b3a(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a1e(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




long FUN_001015ac(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101dc4(undefined8 param_1,undefined8 param_2)

{
  FUN_001026ab(param_1,param_2);
  return;
}




void FUN_00103b31(void)

{
  return;
}




void FUN_00103699(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001026ab(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bf1(param_1,param_2);
  return;
}




void FUN_0010266a(void)

{
  return;
}




long FUN_001027bc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101e14(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101e14(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010341f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103516(&local_10);
  FUN_00102d14(uVar1);
  return;
}




void FUN_0010276a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c04(param_1);
  FUN_00102c69(*param_1,uVar1);
  return;
}




void FUN_00102634(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b94(param_1,param_2,param_3);
  return;
}




void FUN_00103ace(void)

{
  return;
}




void FUN_0010270a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c1a(param_3);
  uVar2 = FUN_00102c04(param_1);
  FUN_00102c2c(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102efd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103104(param_1,param_2,param_3);
  return;
}




void FUN_00102c2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c1a(param_3);
  FUN_00102f2e(param_1,param_2,uVar1);
  return;
}




void FUN_001026d6(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103b26(void)

{
  return;
}




void FUN_00102858(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d14(param_2);
  uVar2 = FUN_00102d14(param_1);
  FUN_00102d26(uVar2,uVar1,param_3);
  return;
}




void FUN_00102fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103154(param_1,param_2,param_3);
  return;
}



