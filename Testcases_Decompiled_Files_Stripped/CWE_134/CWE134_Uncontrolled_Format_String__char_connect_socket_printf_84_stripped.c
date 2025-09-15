
void FUN_001024c6(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f19(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102277(void)

{
  return;
}




void FUN_00101ae0(undefined8 *param_1)

{
  printf((char *)*param_1);
  return;
}




void FUN_00101d68(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001022c4(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010228d,local_18);
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




void FUN_00101cbc(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001016e3(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_80 = 0;
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
  pvVar1 = operator_new(8);
                    /* try { // try from 0010178d to 00101791 has its CatchHandler @ 001017bc */
  FUN_0010152a(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_001016bc(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102214(void)

{
  return;
}




void FUN_00101e98(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010190f(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_80 = 0;
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
  pvVar1 = operator_new(8);
                    /* try { // try from 001019b9 to 001019bd has its CatchHandler @ 001019e8 */
  FUN_00101b08(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101c9a(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101d14(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101b08(long *param_1,long param_2)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  sVar2 = strlen((char *)*param_1);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_28,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,(void *)(*param_1 + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*param_1 + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr((char *)*param_1,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr((char *)*param_1,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101e13(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001021d2(void)

{
  return;
}




void FUN_00101e3e(undefined4 param_1)

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




void FUN_0010224b(void)

{
  return;
}




void FUN_001024a7(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




int FUN_001021ad(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001021fe(void)

{
  return;
}




void FUN_001017f9(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_80 = 0;
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
  pvVar1 = operator_new(8);
                    /* try { // try from 001018a3 to 001018a7 has its CatchHandler @ 001018d2 */
  FUN_00101aa0(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101ae0(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010228d(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102488(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102500(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00102240(void)

{
  return;
}




void FUN_00101c9a(undefined8 *param_1)

{
  puts((char *)*param_1);
  return;
}




void FUN_00101de8(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_0010152a(long *param_1,long param_2)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  sVar2 = strlen((char *)*param_1);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = connect(__fd,&local_28,0x10);
    if (iVar1 != -1) {
      sVar3 = recv(__fd,(void *)(*param_1 + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*param_1 + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr((char *)*param_1,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr((char *)*param_1,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001021dd(void)

{
  return;
}




undefined8 FUN_0010240f(undefined8 *param_1)

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




void FUN_00101d92(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102261(void)

{
  return;
}




void FUN_001016bc(undefined8 *param_1)

{
  printf((char *)*param_1);
  return;
}




void FUN_00102209(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105020 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101470();
    DAT_00105020 = 1;
    return;
  }
  return;
}




void FUN_0010221f(void)

{
  return;
}




void FUN_00101f4c(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102282(void)

{
  return;
}




undefined8 FUN_001023ec(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102570(void)

{
  return;
}




void FUN_00101d3c(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ec0(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001021f3(void)

{
  return;
}




ulong FUN_00101fac(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030a4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101a25(void)

{
  FUN_001017f9();
  FUN_0010190f();
  return;
}




ulong FUN_001020b0(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030ac,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010218f(void)

{
  return 1;
}




void FUN_001021e8(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104ed0)();
  return;
}




void FUN_00102235(void)

{
  return;
}




bool FUN_00102391(pthread_t *param_1)

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




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00101dbd(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102256(void)

{
  return;
}




void FUN_001021c7(void)

{
  return;
}




void FUN_0010226c(void)

{
  return;
}




void FUN_00101eeb(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




undefined8 FUN_0010219e(void)

{
  return 0;
}




void FUN_00101aa0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void FUN_0010222a(void)

{
  return;
}




void FUN_00101ce2(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00101a3a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101cbc("Calling good()...");
  FUN_00101a25();
  FUN_00101cbc("Finished good()");
  FUN_00101cbc("Calling bad()...");
  FUN_001016e3();
  FUN_00101cbc("Finished bad()");
  return 0;
}



