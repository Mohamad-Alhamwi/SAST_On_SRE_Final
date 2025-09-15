
undefined8 FUN_001049f8(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104c60(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00103570(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e20(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104564(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c56(param_1);
  FUN_0010479f(uVar1);
  return;
}




void FUN_00104723(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048cf(param_1,param_2,param_3);
  return;
}




void FUN_00104ede(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104e2e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103162(long *param_1)

{
  FUN_001034c2(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001030b6(param_1);
  return;
}




void FUN_00105098(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010479f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104993(param_1);
  puVar1 = (undefined8 *)FUN_001049b1(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00104f09(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00104678(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00104364(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010309f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_0010476e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104945(param_1,param_2,param_3);
  return;
}




void FUN_00104945(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001044de(param_1);
  uVar1 = FUN_00104ac8(uVar1,param_2,param_3);
  FUN_00104758(&local_10,uVar1);
  return;
}




void FUN_00104e60(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010419f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045e7(param_2);
  uVar2 = FUN_001045e7(param_1);
  FUN_00104429(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00104fe4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103e54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104364(param_3);
  uVar2 = FUN_0010434e(param_1);
  FUN_00104376(*param_1,uVar2,uVar1);
  return;
}




void FUN_00104a0a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044de(param_3);
  uVar2 = FUN_00104b13(local_28);
  uVar3 = FUN_00104b13(local_20);
  uVar1 = FUN_00104b34(uVar3,uVar2,uVar1);
  FUN_00104758(&local_30,uVar1);
  return;
}




void FUN_0010538c(void)

{
  return;
}




void FUN_00105334(void)

{
  return;
}




void FUN_00104eb4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00104d0d(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104de4(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




void FUN_00104634(void)

{
  return;
}




undefined8 FUN_00104758(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




/* WARNING: Removing unreachable block (ram,0x001025a4) */
/* WARNING: Removing unreachable block (ram,0x001025b0) */

void FUN_00102580(void)

{
  return;
}




void FUN_001043b3(undefined8 param_1,undefined8 param_2)

{
  FUN_001046bc(param_1,param_2);
  return;
}




void FUN_001030b6(undefined8 param_1)

{
  FUN_00103142(param_1);
  return;
}




undefined8 FUN_001041f7(undefined8 param_1,undefined8 param_2)

{
  FUN_00104224(param_1,param_2);
  return param_1;
}




void FUN_00103480(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_001044de(undefined8 param_1)

{
  return param_1;
}




void FUN_0010360c(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00104078(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103b2c(local_80);
      local_60 = FUN_00103f06(&local_88,&local_78);
      local_70 = FUN_00104168(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001034fc(local_80);
                    /* try { // try from 00103916 to 001039a1 has its CatchHandler @ 00103a59 */
      FUN_00104043(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001034fc(local_80);
      puVar2 = (undefined8 *)FUN_0010355e(&local_88);
      local_70 = FUN_0010419f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001034fc(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010355e(&local_88);
      local_70 = FUN_0010419f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001034fc(local_80);
      FUN_0010350e(*local_80,local_80[1],uVar1);
      FUN_001034c2(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00103e54(local_38,param_1,param_4);
                    /* try { // try from 00103696 to 00103869 has its CatchHandler @ 00103a3b */
      local_50 = FUN_00103ee8(local_38);
      local_78 = FUN_001031fc(local_80);
      local_48 = FUN_00103f06(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001034fc(local_80);
        FUN_00103f4a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010355e(&local_88);
        FUN_00103fa2(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010355e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010355e(&local_88);
        FUN_00103ff2(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001034fc(local_80);
        lVar4 = FUN_00104043(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001034fc(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010355e(&local_88);
        FUN_00103f4a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010355e(&local_88);
        FUN_00103ff2(*puVar2,local_40,local_50);
      }
      FUN_00103eb4(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001053ad(void)

{
  return;
}




void FUN_00104a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104b69(param_2);
  uVar2 = FUN_00104b69(param_1);
  FUN_00104b8f(uVar2,uVar1,param_3);
  return;
}




void FUN_00102c46(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
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
  FUN_001030f6(local_d8);
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
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102d89 to 00102f9d has its CatchHandler @ 00102ff5 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f8 + local_e8,99 - local_e8,0);
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
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103340(local_b8,local_d8);
                    /* try { // try from 00102fa8 to 00102fac has its CatchHandler @ 00102fdd */
  FUN_00104d99(local_b8);
  FUN_001031b4(local_b8);
  FUN_001031b4(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010445e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104bfd(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00103b2c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010353c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010324c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010355e(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00104b13(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103e42(&local_10);
  return *puVar1;
}




void FUN_00105612(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103fa2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010445e(param_2);
  uVar2 = FUN_0010445e(param_1);
  FUN_00104470(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00105410(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001053d9,local_18);
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




void FUN_00103142(undefined8 param_1)

{
  FUN_001034b2(param_1);
  return;
}




void FUN_00104f5f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103e42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001049e0(void)

{
  return 0xfffffffffffffff;
}




void FUN_001046bc(void)

{
  return;
}




undefined8 * FUN_00104ac8(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001053d9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00103d26(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103e20(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010353c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010533f(void)

{
  return;
}




ulong FUN_001051fc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_001054dd(pthread_t *param_1)

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




void FUN_00102020(void)

{
  (*(code *)PTR_00108e98)();
  return;
}




void FUN_0010500c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044de(param_3);
  uVar2 = FUN_001044de(local_28);
  uVar3 = FUN_001044de(local_20);
  uVar1 = FUN_00104723(uVar3,uVar2,uVar1);
  FUN_00104758(&local_30,uVar1);
  return;
}




void FUN_001055f3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00105065(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00103c68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010424e(param_1,param_3);
                    /* try { // try from 00103ca2 to 00103ca6 has its CatchHandler @ 00103ca9 */
  FUN_00104284(param_1,param_2);
  return;
}




void FUN_001044f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00104e88(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void * FUN_00104caa(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_001048cf(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00104429(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046ee(param_1,param_2,param_3);
  return;
}




void FUN_0010531e(void)

{
  return;
}




void FUN_00105329(void)

{
  return;
}




void FUN_00103ff2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001044de(param_2);
  uVar2 = FUN_001044de(param_1);
  FUN_001044f0(uVar2,uVar1,param_3);
  return;
}




void FUN_001034b2(void)

{
  return;
}




void FUN_001042de(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104647(param_1,param_2,param_3);
  return;
}




void FUN_001053a2(void)

{
  return;
}




void FUN_00105381(void)

{
  return;
}




undefined8 FUN_00103b78(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010353c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong * FUN_001049b1(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105313(void)

{
  return;
}




void FUN_00103460(undefined8 param_1)

{
  FUN_00103db4(param_1);
  return;
}




void FUN_00105376(void)

{
  return;
}




void FUN_00104647(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010484e(param_1,param_2,param_3);
  return;
}




void FUN_00104f8a(undefined4 param_1)

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




undefined8 FUN_0010303a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104e08("Calling good()...");
  FUN_00103025();
  FUN_00104e08("Finished good()");
  FUN_00104e08("Calling bad()...");
  FUN_00102609();
  FUN_00104e08("Finished bad()");
  return 0;
}




void FUN_0010484e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001049f8(param_2);
  uVar2 = FUN_001049f8(param_1);
  FUN_00104a0a(uVar2,uVar1,param_3);
  return;
}




void FUN_001053c3(void)

{
  return;
}




void FUN_00105037(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001034c2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103dc3(param_1,param_2,param_3);
  }
  return;
}




void FUN_00104284(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104168(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_0010489e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a78(param_1,param_2,param_3);
  return;
}




void FUN_00104e08(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103c56(undefined8 param_1)

{
  return param_1;
}




void FUN_001030f6(undefined8 param_1)

{
  FUN_001030d6(param_1);
  return;
}




void FUN_00103df5(undefined8 param_1,undefined8 param_2)

{
  FUN_0010433b(param_1,param_2);
  return;
}




long FUN_00103bde(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_0010555b(undefined8 *param_1)

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




void FUN_001055d4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00104043(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010452e(param_1,param_2,param_3);
  return;
}




void FUN_00103f4a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001043dd(param_2);
  uVar2 = FUN_001043dd(param_1);
  FUN_00104429(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_001034fc(undefined8 param_1)

{
  return param_1;
}




void FUN_001046d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_0010355e(undefined8 param_1)

{
  return param_1;
}




void FUN_00104993(undefined8 param_1)

{
  FUN_001049e0(param_1);
  return;
}




void FUN_00104d53(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104de4(param_1,2);
  fprintf(stdout,(char *)*puVar1);
  return;
}




undefined8 FUN_00103c05(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001041f7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001045b9(undefined8 param_1,undefined8 param_2)

{
  FUN_00104808(param_1,param_2,0);
  return;
}




undefined8 FUN_00104364(undefined8 param_1)

{
  return param_1;
}




void FUN_001053ce(void)

{
  return;
}




void FUN_0010327a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00103570(param_1);
  local_18 = FUN_001035c7(&local_38,&local_20);
  local_20 = FUN_00103b2c(local_30);
  uVar1 = FUN_00103b78(&local_20,local_18);
  FUN_0010360c(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103b2c(local_30);
  FUN_00103b78(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001043dd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046d0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001029e8(void)

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
  FUN_001030f6(local_c8);
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
  local_d0 = FUN_001031fc(local_c8);
  FUN_0010324c(local_a8,&local_d0);
                    /* try { // try from 00102af9 to 00102bbe has its CatchHandler @ 00102c16 */
  FUN_0010327a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001031fc(local_c8);
  FUN_0010324c(local_a8,&local_d0);
  FUN_0010327a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001031fc(local_c8);
  FUN_0010324c(local_a8,&local_d0);
  FUN_0010327a(local_c8,local_a8[0],1,&local_d8);
  FUN_00103340(local_a8,local_c8);
                    /* try { // try from 00102bc9 to 00102bcd has its CatchHandler @ 00102bfe */
  FUN_00104d53(local_a8);
  FUN_001031b4(local_a8);
  FUN_001031b4(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001052ea(void)

{
  return 0;
}




void FUN_00103d7e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042de(param_1,param_2,param_3);
  return;
}




void FUN_00104224(undefined8 param_1,undefined8 param_2)

{
  FUN_00104634(param_1,param_2);
  return;
}




void FUN_001030d6(undefined8 param_1)

{
  FUN_00103116(param_1);
  return;
}




void FUN_00105640(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001056b0(void)

{
  return;
}




void FUN_0010452e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010476e(param_1,param_2,param_3);
  return;
}




long FUN_00103f06(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010355e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010355e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010433b(void)

{
  return;
}




undefined8 FUN_001031fc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010353c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong * FUN_0010458a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105355(void)

{
  return;
}




void FUN_00103340(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103c56(param_2);
  FUN_00103c05(&local_31,uVar1);
  uVar1 = FUN_00103bde(param_2);
                    /* try { // try from 001033a6 to 001033aa has its CatchHandler @ 00103413 */
  FUN_00103c68(param_1,uVar1,&local_31);
  FUN_00103142(&local_31);
  uVar2 = FUN_001034fc(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103d26(param_2);
  uVar4 = FUN_00103cce(param_2);
                    /* try { // try from 001033f4 to 001033f8 has its CatchHandler @ 00103431 */
  uVar1 = FUN_00103d7e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102563) */
/* WARNING: Removing unreachable block (ram,0x0010256f) */

void FUN_00102550(void)

{
  return;
}




void FUN_00103116(undefined8 param_1)

{
  FUN_00103460(param_1);
  FUN_00103480(param_1);
  return;
}




void FUN_00104808(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001049e0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




int FUN_001052f9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00104078(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00104564(param_1);
  lVar2 = FUN_00103bde(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103bde(local_40);
  local_30 = FUN_00103bde(local_40);
  plVar3 = (long *)FUN_0010458a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103bde(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104564(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104564(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0010536b(void)

{
  return;
}




void FUN_00104b69(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104c60(&local_10);
  FUN_0010445e(uVar1);
  return;
}




void FUN_00104314(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




long FUN_00104de4(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00104376(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104364(param_3);
  FUN_00104678(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001045e7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046d0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00105397(void)

{
  return;
}




undefined8 FUN_0010309f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8 FUN_001052db(void)

{
  return 1;
}




void FUN_00104c75(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104caa(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00104168(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_001045b9(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103e20(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103cce(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e20(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010534a(void)

{
  return;
}




void FUN_001046ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010489e(param_1,param_2,param_3);
  return;
}




void FUN_00103025(void)

{
  FUN_001029e8();
  FUN_00102c46();
  return;
}




void FUN_00103dc3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104314(param_1,param_2,param_3);
  return;
}




void FUN_001031b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034fc(param_1);
  FUN_0010350e(*param_1,param_1[1],uVar1);
  FUN_00103162(param_1);
  return;
}




ulong FUN_001050f8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102609(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
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
  FUN_001030f6(local_d8);
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
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 0010274c to 00102960 has its CatchHandler @ 001029b8 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f8 + local_e8,99 - local_e8,0);
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
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031fc(local_d8);
  FUN_0010324c(local_b8,&local_f0);
  FUN_0010327a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103340(local_b8,local_d8);
                    /* try { // try from 0010296b to 0010296f has its CatchHandler @ 001029a0 */
  FUN_00104d0d(local_b8);
  FUN_001031b4(local_b8);
  FUN_001031b4(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00104d99(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104de4(param_1,2);
  fprintf(stdout,"%s\n",*puVar1);
  return;
}




void FUN_00104f34(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




long FUN_001035c7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103e42(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103e42(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010424e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104224(param_1,param_2);
  FUN_00103480(param_1);
  return;
}




void FUN_00103db4(void)

{
  return;
}




void FUN_00103ee8(undefined8 param_1)

{
  FUN_0010434e(param_1);
  return;
}




void FUN_001053b8(void)

{
  return;
}




void FUN_00105360(void)

{
  return;
}




void * FUN_00104bfd(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




long FUN_0010434e(long param_1)

{
  return param_1 + 8;
}




void FUN_00103eb4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010434e(param_1);
  FUN_001043b3(*param_1,uVar1);
  return;
}




undefined8 FUN_00105538(void *param_1)

{
  free(param_1);
  return 1;
}




void _FINI_0(void)

{
  if (DAT_00109028 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102550();
    DAT_00109028 = 1;
    return;
  }
  return;
}




void FUN_0010350e(undefined8 param_1,undefined8 param_2)

{
  FUN_00103df5(param_1,param_2);
  return;
}




void FUN_00104b8f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044de(param_3);
  uVar2 = FUN_001044de(local_28);
  uVar3 = FUN_001044de(local_20);
  uVar1 = FUN_00104c75(uVar3,uVar2,uVar1);
  FUN_00104758(&local_30,uVar1);
  return;
}



