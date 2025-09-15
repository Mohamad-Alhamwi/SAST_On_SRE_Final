
ulong FUN_0010551e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00106098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010347a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_001038c3(local_28);
    FUN_0010347a(param_1,uVar1);
    lVar2 = FUN_001038d9(local_28);
    FUN_001038f0(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_001035ea(undefined8 param_1,undefined8 param_2)

{
  FUN_00103a48(param_1,param_2);
  return;
}




void FUN_00105a19(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c04(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317e(local_f8);
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
  local_11c = -1;
  sVar2 = strlen(local_88);
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
                    /* try { // try from 00102d8e to 00102f4e has its CatchHandler @ 00102fa6 */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_001031be(local_c8,local_f8);
                    /* try { // try from 00102f59 to 00102f5d has its CatchHandler @ 00102f8e */
  FUN_001051b8(local_c8);
  FUN_0010319e(local_c8);
  FUN_0010319e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010315e(undefined8 param_1)

{
  FUN_001031e8(param_1);
  return;
}




void FUN_0010392e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104214(param_1);
  uVar2 = FUN_001034e4(param_1);
  FUN_0010422a(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_001038b4(void)

{
  return;
}




undefined8 FUN_00104f0a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104398(param_1);
  uVar2 = FUN_00104ef7(param_2);
  FUN_00104f9a(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_0010579c(void)

{
  return;
}




undefined8 FUN_00105836(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001057ff,local_18);
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




void FUN_0010532f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103aac(undefined8 param_1)

{
  return param_1;
}




void FUN_001031be(undefined8 param_1,undefined8 param_2)

{
  FUN_001033ae(param_1,param_2);
  return;
}




undefined8 FUN_0010397e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104024(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001030a6(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_0010319e(undefined8 param_1)

{
  FUN_00103244(param_1);
  return;
}




void FUN_001033ae(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001037b4(param_1,param_2);
  lVar1 = FUN_00103824(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_0010383a(param_1);
                    /* try { // try from 00103409 to 0010340d has its CatchHandler @ 00103413 */
    uVar3 = FUN_00103850(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




undefined8 FUN_001038c3(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined4 * FUN_00104c48(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00104810(param_2);
  puVar2 = (undefined4 *)FUN_00104e54(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




undefined8 FUN_00105710(void)

{
  return 0;
}




void FUN_00103a10(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039fe(param_2);
  FUN_00104306(param_1,uVar1);
  return;
}




void FUN_00105770(void)

{
  return;
}




void FUN_00105739(void)

{
  return;
}




undefined8 FUN_001034e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010433e(undefined8 param_1)

{
  FUN_00104acc(param_1);
  return;
}




void FUN_001057de(void)

{
  return;
}




void FUN_001040d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00104aba(undefined8 param_1)

{
  return param_1;
}




void FUN_001038f0(undefined8 param_1,undefined8 param_2)

{
  FUN_00104196(param_1,param_2);
  FUN_001041da(param_1,param_2);
  return;
}




undefined8
FUN_0010366e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  uVar1 = FUN_00103aac(param_5);
  uVar2 = FUN_00103a9a(param_4);
  uVar3 = FUN_00103a88(param_3);
  local_40 = FUN_00103abe(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 001036ea to 0010372d has its CatchHandler @ 0010376b */
  uVar1 = FUN_00103ee7(local_40);
  local_38 = FUN_00103b3e(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_001038f0(param_1,local_40);
    FUN_00104024(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00103f3a(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




void FUN_00103066(void)

{
  return;
}




void FUN_0010317e(undefined8 param_1)

{
  FUN_0010315e(param_1);
  return;
}




void FUN_00104f9a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00103050(0x30,param_2);
  uVar1 = FUN_00104ef7(param_3);
  uVar2 = FUN_001039dc(param_2);
  uVar3 = FUN_00104a4c(param_1);
  FUN_00105026(uVar3,uVar2,uVar1);
  return;
}




void FUN_00104ae1(undefined8 param_1,undefined8 param_2)

{
  FUN_00104d14(param_1,param_2,0);
  return;
}




void _FINI_0(void)

{
  if (DAT_0010a028 == '\0') {
    if (PTR___cxa_finalize_00109fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_0010a008);
    }
    FUN_00102590();
    DAT_0010a028 = 1;
    return;
  }
  return;
}




void FUN_00104398(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104a4c(param_1);
  FUN_00104ae1(uVar1,1);
  return;
}




void FUN_00105385(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010574f(void)

{
  return;
}




void FUN_001034fa(undefined8 param_1,undefined8 param_2)

{
  FUN_0010392e(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025a3) */
/* WARNING: Removing unreachable block (ram,0x001025af) */

void FUN_00102590(void)

{
  return;
}




undefined4 FUN_00103568(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_001039ce(param_1);
  return unaff_EBX;
}




void FUN_001052da(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010522e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




int FUN_0010571f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00103542(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_0010545d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00105286(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 * FUN_001047a4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00104c2a(undefined8 param_1)

{
  FUN_00104e42(param_1);
  return;
}




void FUN_0010451e(undefined8 param_1)

{
  FUN_00103ee7(param_1);
  return;
}




void FUN_001039dc(long param_1)

{
  FUN_001042e8(param_1 + 0x20);
  return;
}




void FUN_00105786(void)

{
  return;
}




void FUN_00103524(undefined8 param_1)

{
  FUN_0010397e(param_1);
  return;
}




void FUN_0010346a(void)

{
  return;
}




void FUN_001030d4(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001030fe(param_1);
  return;
}




void FUN_001053b0(undefined4 param_1)

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




long FUN_00104508(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00105026(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104ef7(param_3);
  FUN_00105082(param_1,param_2,uVar1);
  return;
}




void FUN_00104a5e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104cd8(param_1,param_2);
  return;
}




undefined8 FUN_001040ee(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_00104214(param_1);
  uVar2 = FUN_0010488a(param_2);
  uVar1 = FUN_001048a0(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_0010471a(param_1);
  uVar2 = FUN_00104a0f(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00104508(param_1);
  uVar2 = FUN_00104a2d(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00103b3e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  lVar3 = FUN_001044a2(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_00104214(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_0010451e(local_50);
    cVar2 = FUN_001035b0(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_0010451e(local_50);
      cVar2 = FUN_001035b0(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_001047d0(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00104508(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00104508(local_60);
          local_48[1] = 0;
          FUN_0010453c(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_001047a4(local_48);
          uVar6 = FUN_0010451e(*puVar5);
          cVar2 = FUN_001035b0(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_0010457c(local_60,param_3);
          }
          else {
            lVar3 = FUN_001038c3(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_0010453c(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_00104730(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_0010471a(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_0010471a(local_60);
        uVar6 = FUN_0010471a(local_60);
        FUN_00104730(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00104778(local_48);
        uVar6 = FUN_0010451e(*puVar5);
        cVar2 = FUN_001035b0(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_0010457c(local_60,param_3);
        }
        else {
          lVar3 = FUN_001038c3(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_0010453c(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_00104730(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00103ecc;
  }
  lVar3 = FUN_001044f2(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00103be0:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00104508(local_60);
    uVar6 = FUN_0010451e(*puVar5);
    cVar2 = FUN_001035b0(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00103be0;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00104508(local_60);
    local_48[1] = 0;
    FUN_0010453c(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_0010457c(local_60,param_3);
  }
LAB_00103ecc:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_00104f56(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00105008(param_2);
  puVar2 = (undefined4 *)FUN_0010435c(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00104b0f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00103aac(param_5);
  uVar2 = FUN_00103a9a(param_4);
  uVar3 = FUN_00103a88(param_3);
  FUN_00104d64(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_0010453c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00104b7f(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_0010488a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010433e(param_2);
  uVar1 = FUN_0010435c(uVar1);
  FUN_0010436e(param_1,uVar1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001025e4) */
/* WARNING: Removing unreachable block (ram,0x001025f0) */

void FUN_001025c0(void)

{
  return;
}




undefined8 * FUN_00104778(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00103a9a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104b7f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104e8e(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_00102649(void)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_11c;
  undefined local_f8 [48];
  undefined4 local_c8 [12];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010317e(local_f8);
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
  local_11c = -1;
  sVar2 = strlen(local_88);
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
                    /* try { // try from 001027d3 to 00102993 has its CatchHandler @ 001029eb */
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_11c = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_11c != -1)) {
      sVar3 = recv(local_11c,local_88 + sVar2,99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_88[(long)iVar1 + sVar2] = '\0';
        pcVar4 = strchr(local_88,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr(local_88,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_11c != -1) {
    close(local_11c);
  }
  local_c8[0] = 0;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 1;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  local_c8[0] = 2;
  puVar5 = (undefined8 *)FUN_00103282(local_f8,local_c8);
  *puVar5 = local_88;
  FUN_001031be(local_c8,local_f8);
                    /* try { // try from 0010299e to 001029a2 has its CatchHandler @ 001029d3 */
  FUN_001050d4(local_c8);
  FUN_0010319e(local_c8);
  FUN_0010319e(local_f8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_001038d9(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010364c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




long FUN_00103282(undefined8 param_1,undefined8 param_2)

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
  local_38 = FUN_001034fa(param_1,param_2);
  local_28 = FUN_00103524(param_1);
  cVar2 = FUN_00103542(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_00103568(param_1);
    uVar3 = FUN_0010358e(&local_38);
    cVar2 = FUN_001035b0(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_00103322;
    }
  }
  bVar1 = true;
LAB_00103322:
  if (bVar1) {
    uVar3 = FUN_001035d7(param_2);
    FUN_00103614(local_30,uVar3);
    FUN_0010364c(&local_28,&local_38);
    local_38 = FUN_0010366e(param_1,local_28,&DAT_00106004,local_30,&local_39);
  }
  lVar4 = FUN_0010358e(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




void FUN_00104092(undefined8 param_1,undefined8 param_2)

{
  FUN_00104876(param_1,param_2);
  return;
}




void FUN_00105791(void)

{
  return;
}




void FUN_001040bc(void)

{
  return;
}




undefined8 FUN_00104a4c(undefined8 param_1)

{
  return param_1;
}




void FUN_00105254(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010540a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010436e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039fe(param_2);
  *param_1 = uVar1;
  return;
}




undefined8 FUN_00104b92(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104024(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105146(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00103282(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00105981(undefined8 *param_1)

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




void FUN_00104306(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039fe(param_2);
  FUN_0010436e(param_1,uVar1);
  return;
}




void FUN_0010345a(void)

{
  return;
}




void FUN_001050d4(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  char *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00103282(param_1,&local_1c);
  local_18 = (char *)*puVar1;
  fprintf(stdout,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00104042(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104848(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001042e8(undefined8 param_1)

{
  FUN_00104aba(param_1);
  return;
}




long FUN_00103079(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_0010548b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00104cd8(void)

{
  return;
}




undefined8 FUN_001039fe(undefined8 param_1)

{
  return param_1;
}




void FUN_00103224(undefined8 param_1)

{
  FUN_0010346a(param_1);
  return;
}




undefined8 FUN_001044a2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104024(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104cec(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001057c8(void)

{
  return;
}




undefined8 FUN_00103a88(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00105701(void)

{
  return 1;
}




void FUN_00103244(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034e4(param_1);
  FUN_0010347a(param_1,uVar1);
  FUN_0010313e(param_1);
  return;
}




void FUN_00103850(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001040d0(local_18,param_1);
  FUN_001040ee(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105008(undefined8 param_1)

{
  FUN_00105063(param_1);
  return;
}




undefined8 FUN_00104832(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_0010471a(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104730(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104b7f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104b7f(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105a38(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00104a2d(undefined8 param_1)

{
  FUN_001030a6(param_1);
  return;
}




void FUN_00104d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103a88(param_3);
  uVar1 = FUN_00103a9a(param_4);
  FUN_001035ea(local_38,uVar1);
  FUN_00103aac(param_5);
  uVar1 = FUN_00103050(0x10,param_2);
                    /* try { // try from 00104dec to 00104df0 has its CatchHandler @ 00104df3 */
  FUN_00104ea6(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001030fe(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0010343a(undefined8 param_1)

{
  FUN_001038b4(param_1);
  return;
}




void FUN_001037b4(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00104042(param_1,param_2);
  FUN_001040bc(param_1,param_2);
  FUN_001030d4(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_001048a0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00104c48(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00104cac(param_2);
                    /* try { // try from 0010490f to 001049a1 has its CatchHandler @ 001049cd */
    uVar2 = FUN_001048a0(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00104cc2(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00104c48(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00104cac(local_38);
      uVar2 = FUN_001048a0(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00104cc2(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00102feb(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010522e("Calling good()...");
  FUN_00102fd6();
  FUN_0010522e("Finished good()");
  FUN_0010522e("Calling bad()...");
  FUN_00102649();
  FUN_0010522e("Finished bad()");
  return 0;
}




void FUN_001051b8(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00103282(param_1,&local_1c);
  local_18 = *puVar1;
  fprintf(stdout,"%s\n",local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105765(void)

{
  return;
}




void FUN_0010575a(void)

{
  return;
}




undefined8 FUN_001044f2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001057d3(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00109e88)();
  return;
}




undefined8 FUN_00104e42(undefined8 param_1)

{
  return param_1;
}




undefined8
FUN_00103f3a(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

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
    p_Var3 = (_Rb_tree_node_base *)FUN_00104214(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_0010451e(param_3);
      uVar5 = FUN_00103ee7(param_4);
      cVar1 = FUN_001035b0(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_00103fbe;
      }
    }
  }
  bVar2 = true;
LAB_00103fbe:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00104024(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_001057bd(void)

{
  return;
}




void FUN_001047d0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104b7f(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00104810(long param_1)

{
  FUN_00104c2a(param_1 + 0x20);
  return;
}




void FUN_00102a1b(void)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined local_e8 [48];
  undefined4 local_b8 [12];
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
  FUN_0010317e(local_e8);
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
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_b8[0] = 0;
                    /* try { // try from 00102afb to 00102b7c has its CatchHandler @ 00102bd4 */
  plVar1 = (long *)FUN_00103282(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 1;
  plVar1 = (long *)FUN_00103282(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  local_b8[0] = 2;
  plVar1 = (long *)FUN_00103282(local_e8,local_b8);
  *plVar1 = (long)&local_88;
  FUN_001031be(local_b8,local_e8);
                    /* try { // try from 00102b87 to 00102b8b has its CatchHandler @ 00102bbc */
  FUN_00105146(local_b8);
  FUN_0010319e(local_b8);
  FUN_0010319e(local_e8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104876(void)

{
  return;
}




ulong FUN_00105622(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060a0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102fd6(void)

{
  FUN_00102a1b();
  FUN_00102c04();
  return;
}




void FUN_001041da(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104a4c(param_1);
  FUN_00104a88(uVar1,param_2,1);
  return;
}




void FUN_001031e8(long param_1)

{
  FUN_0010343a(param_1);
  FUN_0010345a(param_1);
  FUN_001030d4(param_1 + 8);
  return;
}




void FUN_00105082(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00104ef7(param_3);
  puVar3 = (undefined8 *)FUN_00103050(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




void FUN_00104024(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010422a(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

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
    uVar2 = FUN_00103ee7(local_38);
    cVar1 = FUN_001035b0(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_001038c3(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_001038d9(local_38);
    }
  }
  FUN_00104024(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010595e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010358e(undefined8 *param_1)

{
  FUN_001039dc(*param_1);
  return;
}




void FUN_001057ff(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_0010383a(long param_1)

{
  return param_1 + 0x10;
}




void FUN_001059fa(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00103050(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_0010435c(undefined8 param_1)

{
  return param_1;
}




void FUN_001057a7(void)

{
  return;
}




void FUN_00105744(void)

{
  return;
}




void FUN_00103ee7(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00104810(param_1);
  FUN_00104832(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104e54(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00104ef7(param_2);
  FUN_00104f0a(uVar1,uVar2);
  return;
}




undefined8 FUN_00103614(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039fe(param_2);
  FUN_00103a10(param_1,uVar1);
  return param_1;
}




undefined8 FUN_00104cc2(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_0010535a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_0010577b(void)

{
  return;
}




void FUN_00105a70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00104196(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001039dc(param_2);
  uVar2 = FUN_00104a4c(param_1);
  FUN_00104a5e(uVar2,uVar1);
  return;
}




void FUN_001054be(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001052ae(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010313e(undefined8 param_1)

{
  FUN_00103224(param_1);
  return;
}




void FUN_00104be2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104e2f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00104b7f(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00105063(undefined8 param_1)

{
  FUN_0010433e(param_1);
  return;
}




undefined8 FUN_00103abe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00104398(param_1);
  uVar2 = FUN_00103aac(param_4);
  uVar3 = FUN_00103a9a(param_3);
  uVar4 = FUN_00103a88(param_2);
  FUN_001043c4(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




undefined8 FUN_00104848(undefined8 param_1,undefined8 param_2)

{
  FUN_00104092(param_1,param_2);
  return param_1;
}




undefined8 FUN_00104cac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104a88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104cec(param_1,param_2,param_3);
  return;
}




void FUN_001057e9(void)

{
  return;
}




bool FUN_00105903(pthread_t *param_1)

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




void FUN_00104d14(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00104e8e(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00103824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001039ce(void)

{
  return;
}




void FUN_00104ea6(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00104f56(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00105ae0(void)

{
  return;
}




void FUN_001043c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00103050(0x30,param_2);
  uVar1 = FUN_00103aac(param_5);
  uVar2 = FUN_00103a9a(param_4);
  uVar3 = FUN_00103a88(param_3);
  uVar4 = FUN_001039dc(param_2);
  uVar5 = FUN_00104a4c(param_1);
                    /* try { // try from 00104453 to 00104457 has its CatchHandler @ 0010445a */
  FUN_00104b0f(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




long FUN_00104214(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_00104e2f(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001035d7(undefined8 param_1)

{
  return param_1;
}




void FUN_00105304(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001057b2(void)

{
  return;
}




void FUN_001057f4(void)

{
  return;
}




undefined8 FUN_0010457c(undefined8 param_1,undefined8 param_2)

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
  local_58 = FUN_001034e4(param_1);
  local_50 = FUN_00104214(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00103ee7(local_58);
    local_59 = FUN_001035b0(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_001038c3(local_58);
    }
    else {
      local_58 = FUN_001038d9(local_58);
    }
  }
  FUN_00104024(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00104b92(param_1);
    cVar1 = FUN_00103542(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00104be2(local_38,&local_58,&local_50);
      goto LAB_001046fe;
    }
    FUN_00104778(&local_48);
  }
  uVar2 = FUN_0010451e(local_48);
  cVar1 = FUN_001035b0(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_001047d0(local_38,&local_48,&local_40);
  }
  else {
    FUN_00104be2(local_38,&local_58,&local_50);
  }
LAB_001046fe:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104a0f(undefined8 param_1)

{
  FUN_00103079(param_1);
  return;
}




undefined8 FUN_00104acc(undefined8 *param_1)

{
  return *param_1;
}




undefined4 FUN_001035b0(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00105432(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_00104ef7(undefined8 param_1)

{
  return param_1;
}



