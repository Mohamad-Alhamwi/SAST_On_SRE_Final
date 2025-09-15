
void FUN_00103246(void)

{
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0010297c(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_bc;
  undefined **local_b0;
  char *local_a8;
  size_t local_a0;
  char *local_98;
  undefined ***local_90;
  sockaddr local_88;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  local_a8 = local_78;
  local_bc = -1;
  local_a0 = strlen(local_a8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_88,0,0x10);
    local_88.sa_family = 2;
    local_88.sa_data[2] = '\0';
    local_88.sa_data[3] = '\0';
    local_88.sa_data[4] = '\0';
    local_88.sa_data[5] = '\0';
    local_88.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_88,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_bc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_bc != -1)) {
      sVar2 = recv(local_bc,local_a8 + local_a0,99 - local_a0,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_a8[(long)iVar1 + local_a0] = '\0';
        local_98 = strchr(local_a8,0xd);
        if (local_98 != (char *)0x0) {
          *local_98 = '\0';
        }
        local_98 = strchr(local_a8,10);
        if (local_98 != (char *)0x0) {
          *local_98 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_bc != -1) {
    close(local_bc);
  }
  local_b0 = &PTR_FUN_00106c58;
  local_90 = &local_b0;
  (*(code *)PTR_FUN_00106c58)(local_90,local_a8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_001031e3(void)

{
  return;
}




void FUN_00103293(void)

{
  return;
}




void FUN_00103204(void)

{
  return;
}




void FUN_00102edc(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010256e(undefined8 param_1,undefined8 param_2)

{
  fprintf(stdout,"%s\n",param_2);
  return;
}




void FUN_0010250a(undefined8 param_1,char *param_2)

{
  fprintf(stdout,param_2);
  return;
}




void FUN_00102dae(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010253c(undefined8 param_1,char *param_2)

{
  fprintf(stdout,param_2);
  return;
}




void FUN_0010329e(void)

{
  return;
}




ulong FUN_001030cc(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00104324,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010323b(void)

{
  return;
}




void FUN_00102d58(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102e5a(undefined4 param_1)

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




void FUN_00103288(void)

{
  return;
}




undefined8 FUN_001032e0(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001032a9,local_18);
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




undefined8 FUN_00103408(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001031f9(void)

{
  return;
}




void FUN_00103230(void)

{
  return;
}




void FUN_001034a4(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103251(void)

{
  return;
}




ulong FUN_00102fc8(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_0010431c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00102450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_001034c3(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103510(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_0010342b(undefined8 *param_1)

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




void FUN_00102dd9(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103225(void)

{
  return;
}




void FUN_00103272(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102463) */
/* WARNING: Removing unreachable block (ram,0x0010246f) */

void FUN_00102450(void)

{
  return;
}




undefined8 FUN_001031ba(void)

{
  return 0;
}




void FUN_00102eb4(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001031ee(void)

{
  return;
}




void FUN_00102f07(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102c5e(void)

{
  FUN_00102886();
  FUN_0010297c();
  return;
}




void FUN_0010321a(void)

{
  return;
}




void FUN_0010327d(void)

{
  return;
}




void FUN_0010325c(void)

{
  return;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001025a4(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  int local_bc;
  undefined **local_b0;
  char *local_a8;
  size_t local_a0;
  char *local_98;
  undefined ***local_90;
  sockaddr local_88;
  char local_78 [104];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  local_78[0x10] = '\0';
  local_78[0x11] = '\0';
  local_78[0x12] = '\0';
  local_78[0x13] = '\0';
  local_78[0x14] = '\0';
  local_78[0x15] = '\0';
  local_78[0x16] = '\0';
  local_78[0x17] = '\0';
  local_78[0x18] = '\0';
  local_78[0x19] = '\0';
  local_78[0x1a] = '\0';
  local_78[0x1b] = '\0';
  local_78[0x1c] = '\0';
  local_78[0x1d] = '\0';
  local_78[0x1e] = '\0';
  local_78[0x1f] = '\0';
  local_78[0x20] = '\0';
  local_78[0x21] = '\0';
  local_78[0x22] = '\0';
  local_78[0x23] = '\0';
  local_78[0x24] = '\0';
  local_78[0x25] = '\0';
  local_78[0x26] = '\0';
  local_78[0x27] = '\0';
  local_78[0x28] = '\0';
  local_78[0x29] = '\0';
  local_78[0x2a] = '\0';
  local_78[0x2b] = '\0';
  local_78[0x2c] = '\0';
  local_78[0x2d] = '\0';
  local_78[0x2e] = '\0';
  local_78[0x2f] = '\0';
  local_78[0x30] = '\0';
  local_78[0x31] = '\0';
  local_78[0x32] = '\0';
  local_78[0x33] = '\0';
  local_78[0x34] = '\0';
  local_78[0x35] = '\0';
  local_78[0x36] = '\0';
  local_78[0x37] = '\0';
  local_78[0x38] = '\0';
  local_78[0x39] = '\0';
  local_78[0x3a] = '\0';
  local_78[0x3b] = '\0';
  local_78[0x3c] = '\0';
  local_78[0x3d] = '\0';
  local_78[0x3e] = '\0';
  local_78[0x3f] = '\0';
  local_78[0x40] = '\0';
  local_78[0x41] = '\0';
  local_78[0x42] = '\0';
  local_78[0x43] = '\0';
  local_78[0x44] = '\0';
  local_78[0x45] = '\0';
  local_78[0x46] = '\0';
  local_78[0x47] = '\0';
  local_78[0x48] = '\0';
  local_78[0x49] = '\0';
  local_78[0x4a] = '\0';
  local_78[0x4b] = '\0';
  local_78[0x4c] = '\0';
  local_78[0x4d] = '\0';
  local_78[0x4e] = '\0';
  local_78[0x4f] = '\0';
  local_78[0x50] = '\0';
  local_78[0x51] = '\0';
  local_78[0x52] = '\0';
  local_78[0x53] = '\0';
  local_78[0x54] = '\0';
  local_78[0x55] = '\0';
  local_78[0x56] = '\0';
  local_78[0x57] = '\0';
  local_78[0x58] = '\0';
  local_78[0x59] = '\0';
  local_78[0x5a] = '\0';
  local_78[0x5b] = '\0';
  local_78[0x5c] = '\0';
  local_78[0x5d] = '\0';
  local_78[0x5e] = '\0';
  local_78[0x5f] = '\0';
  local_78[0x60] = '\0';
  local_78[0x61] = '\0';
  local_78[0x62] = '\0';
  local_78[99] = '\0';
  local_a8 = local_78;
  local_bc = -1;
  local_a0 = strlen(local_a8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_88,0,0x10);
    local_88.sa_family = 2;
    local_88.sa_data[2] = '\0';
    local_88.sa_data[3] = '\0';
    local_88.sa_data[4] = '\0';
    local_88.sa_data[5] = '\0';
    local_88.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_88,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_bc = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_bc != -1)) {
      sVar2 = recv(local_bc,local_a8 + local_a0,99 - local_a0,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_a8[(long)iVar1 + local_a0] = '\0';
        local_98 = strchr(local_a8,0xd);
        if (local_98 != (char *)0x0) {
          *local_98 = '\0';
        }
        local_98 = strchr(local_a8,10);
        if (local_98 != (char *)0x0) {
          *local_98 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_bc != -1) {
    close(local_bc);
  }
  local_b0 = &PTR_FUN_00106c28;
  local_90 = &local_b0;
  (*(code *)PTR_FUN_00106c28)(local_90,local_a8);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102e2f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102c73(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102cd8("Calling good()...");
  FUN_00102c5e();
  FUN_00102cd8("Finished good()");
  FUN_00102cd8("Calling bad()...");
  FUN_001025a4();
  FUN_00102cd8("Finished bad()");
  return 0;
}




void FUN_00102cd8(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102e04(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102cfe(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010320f(void)

{
  return;
}




void FUN_00102f68(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103267(void)

{
  return;
}




void FUN_001032a9(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




/* WARNING: Removing unreachable block (ram,0x001024a4) */
/* WARNING: Removing unreachable block (ram,0x001024b0) */

void FUN_00102480(void)

{
  return;
}




void FUN_00102d84(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




int FUN_001031c9(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00102886(void)

{
  long in_FS_OFFSET;
  undefined **local_90;
  undefined8 *local_88;
  undefined ***local_80;
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
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_88 = &local_78;
  local_78 = 0x7274736465786966;
  local_70 = 0x74736574676e69;
  local_90 = &PTR_FUN_00106c40;
  local_80 = &local_90;
  (*(code *)PTR_FUN_00106c40)(local_80,local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d30(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




bool FUN_001033ad(pthread_t *param_1)

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




void FUN_00103580(void)

{
  return;
}




void FUN_00102f35(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001031ab(void)

{
  return 1;
}




void FUN_001034e2(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}



